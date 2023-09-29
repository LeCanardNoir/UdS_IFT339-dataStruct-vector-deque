# CMakeList.txt : projet CMake pour Vector_Deque, incluez la source et définissez
# la logique spécifique au projet ici.
#

# Ajoutez une source à l'exécutable de ce projet.
add_executable (Vector_Deque "main.cpp" "vector.h" "deque.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Vector_Deque PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
