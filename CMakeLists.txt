file( GLOB CH2_SOURCES Chapter-2-Exercises/*.cpp )

foreach( ch2sourcefile ${CH2_SOURCES} )
    get_filename_component(ch2ex ${ch2sourcefile} NAME_WE)
    add_executable( ${ch2ex} ${ch2sourcefile} )
endforeach( ch2sourcefile ${CH2_SOURCES} )



file( GLOB CH3_SOURCES Chapter-3-Exercises/*.cpp )

foreach( ch3sourcefile ${CH3_SOURCES} )
    get_filename_component(ch3ex ${ch3sourcefile} NAME_WE)
    add_executable( ${ch3ex} ${ch3sourcefile} )
endforeach( ch3sourcefile ${CH3_SOURCES} )



file( GLOB CH4_SOURCES Chapter-4-Exercises/*.cpp )

foreach( ch4sourcefile ${CH4_SOURCES} )
    get_filename_component(ch4ex ${ch4sourcefile} NAME_WE)
    add_executable( ${ch4ex} ${ch4sourcefile} )
endforeach( ch4sourcefile ${CH4_SOURCES} )


file( GLOB CR_SOURCES Chapter-5-Exercises/Class\ Roster/*.cpp )
add_executable( ClassRoster ${CR_SOURCES} )

file( GLOB SR_SOURCES Chapter-5-Exercises/Unkown-Student-Records/*.cpp )
add_executable( StudRecord ${SR_SOURCES} )

file( GLOB AUTO_SOURCES Chapter-5-Exercises/Exercises-5-1-and-5-2/*.cpp )
add_executable( Automobile ${AUTO_SOURCES} )


file( GLOB CH6_SOURCES Chapter-6-Exercises/*.cpp )

foreach( ch6sourcefile ${CH6_SOURCES} )
    get_filename_component(ch6ex ${ch6sourcefile} NAME_WE)
    add_executable( ${ch6ex} ${ch6sourcefile} )
endforeach( ch6sourcefile ${CH6_SOURCES} )
