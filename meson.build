project('karina-reworks', ['c', 'vala'],        version: '0.1.0',
  meson_version: '>= 0.40.0',
)

srcs = [
'src/main.vala',
'src/MainWindow.vala',
'src/HeaderBar/HeaderBar.vala'
]

karina_d = [
dependency('gtk+-3.0')
]

executable('karina', srcs, dependencies : karina_d)
