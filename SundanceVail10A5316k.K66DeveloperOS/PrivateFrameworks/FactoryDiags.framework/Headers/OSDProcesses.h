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
+ (id)getProcesses;	// 0x36b47969
- (id)init;	// 0x36b475d9
- (void)dealloc;	// 0x36b4758d
- (id)getCachedProcesses;	// 0x36b47931
- (id)getProcesses;	// 0x36b47941
- (void)prettyPrintToLog;	// 0x36b479b1
- (id)refreshProcesses;	// 0x36b4762d
- (id)taskInfoForPID:(int)pid;	// 0x36b470dd
- (id)threadInfoForPort:(unsigned)port withUsageAccumulator:(double *)usageAccumulator;	// 0x36b47341
@end
