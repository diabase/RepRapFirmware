/*
 * Version.h
 *
 *  Created on: 25 Dec 2016
 *      Author: David
 */

#ifndef SRC_VERSION_H_
#define SRC_VERSION_H_


#ifndef VERSION
#ifdef RTOS
# define MAIN_VERSION	"2.04RC2-diabase"
#else
# define MAIN_VERSION	"1.25RC2"
#endif

# define VERSION MAIN_VERSION
#endif

#ifndef DATE
# define DATE "2019-08-09b1"
#endif

#define AUTHORS "reprappro, dc42, chrishamm, t3p3, dnewman, printm3d"

#endif /* SRC_VERSION_H_ */
