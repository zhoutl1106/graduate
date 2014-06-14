export T_ROOT=/opt/tslib                 
export TSLIB_CONSOLEDEVICE=none
export TSLIB_FBDEVICE=/dev/fb0
export TSLIB_TSDEVICE=/dev/input/event0
export TSLIB_PLUGINDIR=$T_ROOT/lib/ts
export TSLIB_CONFFILE=$T_ROOT/etc/ts.conf
export TSLIB_CALIBFILE=/etc/pointercal
export QTEDIR=/opt/qtearm              
export QT_QWS_FONTDIR=$QTEDIR/lib/fonts  
export QWS_MOUSE_PROTO="Intellimouse:/dev/input/mouse0"
export QWS_KEYBOARD="USB:/dev/input/event2"
export QWS_DISPLAY=LinuxFB:mmWidth180:mmHeight130:0
export QWS_SIZE=800x600
export LD_LIBRARY_PATH=$T_ROOT/lib:$QTEDIR/lib:$LD_LIBRARY_PATH
