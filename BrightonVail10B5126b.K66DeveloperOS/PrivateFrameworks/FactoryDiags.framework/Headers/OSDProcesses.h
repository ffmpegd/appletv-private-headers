/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface OSDProcesses : NSObject {
	NSMutableDictionary *_processes;	// 4 = 0x4
}
+ (id)getProcesses;	// 0x33eeff35
- (id)init;	// 0x33eefba5
- (void)dealloc;	// 0x33eefb59
- (id)getCachedProcesses;	// 0x33eefefd
- (id)getProcesses;	// 0x33eeff0d
- (void)prettyPrintToLog;	// 0x33eeff7d
- (id)refreshProcesses;	// 0x33eefbf9
- (id)taskInfoForPID:(int)pid;	// 0x33eef6a9
- (id)threadInfoForPort:(unsigned)port withUsageAccumulator:(double *)usageAccumulator;	// 0x33eef90d
@end
