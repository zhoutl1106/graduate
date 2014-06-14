#include "wavegenerator.h"

WaveGenerator::WaveGenerator()
{
}


void MainWindow::m_dataGenerate(int form)
{
    if(m_output)
    {
        switch(form)
        {
        case 1:
            for(int i=0; i<m_length;i++)
                m_data[i]=int(sin(0.25*i)*80);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            for(int i=0; i<m_length;i++)
            {
                m_data[i]=int(rand()*200.0/RAND_MAX-100);
            }
            break;
        case 6:
            cout<<m_length<<endl;
            break;
        }
    }
    else
        for(int i = 0; i<m_length; i++)
            m_data[i] = 0;
    emit parameterChanged(m_length, m_data);
}
