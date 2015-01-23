import os

# Set your qt5 path
#qt5dir = '/home/afrank/QT521/5.2.1/gcc_64'
qt5dir = '/home/frank/Qt/5.3/gcc_64'

# Create base environment
baseEnv = Environment()
#...further customization of base env

# Clone Qt environment
qtEnv = baseEnv.Clone()
# Set QT5DIR and PKG_CONFIG_PATH
qtEnv['ENV']['PKG_CONFIG_PATH'] = os.path.join(qt5dir, 'lib/pkgconfig')
qtEnv['QT5DIR'] = qt5dir
# Add qt5 tool
qtEnv.Tool('qt5')
#...further customization of qt env
qtEnv.Append( CPPFLAGS='-fPIC')

# Export environments
Export('baseEnv qtEnv')

# Your other stuff...
# ...including the call to your SConscripts

SConscript('SConscript')

