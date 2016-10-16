/******************************************************************************
    Copyright � 2012-2015 Martin Karsten

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/
#include "kernel/Process.h"

int InitProcess() {
  Process *p0 = knew<Process>();
  p0->exec("prog1");
  
  Process *p1 = knew<Process>();
  p1->exec("prog1");

  Process *p2 = knew<Process>();
  p2->exec("prog1");
  
  Process *p3 = knew<Process>();
  p3->exec("prog2");

  Process *p4 = knew<Process>();
  p4->exec("prog2");
  
  Process *p5 = knew<Process>();
  p5->exec("prog2"); 

  Process *p6 = knew<Process>();
  p6->exec("prog3");

  Process *p7 = knew<Process>();
  p7->exec("prog3");

  Process *p8 = knew<Process>();
  p8->exec("prog3");

  Process *p9 = knew<Process>();
  p9->exec("schedAffinityTest");






  
#if !TESTING_KEYCODE_LOOP
  //Process* p1 = knew<Process>();
  // p1->exec("kbloop");
#endif
  // Process* p2 = knew<Process>();
  // p2->exec("threadtest");
  // Process* p3 = knew<Process>();
  // p3->exec("manythread");
  return 0;
}
