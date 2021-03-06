/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface ATVHardwareUtility : BRSingleton {
}
+ (id)configurationInfo;	// 0x188a89
+ (id)mediaFolderPath;	// 0x18886d
+ (BOOL)performObliteratePreservingPaths:(id)paths;	// 0x1888bd
+ (void)pushDiagnosticLogsAtPaths:(id)paths;	// 0x188dd1
+ (void)setSILState_HardwareProblem;	// 0x188839
+ (void)setSILState_Off;	// 0x188769
+ (void)setSILState_On;	// 0x18879d
+ (void)setSILState_RejectedCommand;	// 0x188805
+ (void)setSILState_Starting;	// 0x1887d1
+ (void)setSingleton:(id)singleton;	// 0x188759
+ (id)singleton;	// 0x188749
@end

