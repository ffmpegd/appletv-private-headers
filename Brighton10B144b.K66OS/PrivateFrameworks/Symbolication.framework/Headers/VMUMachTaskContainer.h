/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMUMachTaskContainer : NSObject {
	int _pid;	// 4 = 0x4
	unsigned _task;	// 8 = 0x8
}
@property(readonly, assign) int pid;	// G=0x3558c1bd; converted property
@property(readonly, assign) unsigned task;	// G=0x3558c1ad; converted property
+ (id)machTaskContainer;	// 0x3558bff9
+ (id)machTaskContainerWithPid:(int)pid;	// 0x3558c08d
+ (id)machTaskContainerWithPid:(int)pid task:(unsigned)task;	// 0x3558c101
+ (id)machTaskContainerWithTask:(unsigned)task;	// 0x3558c039
- (id)initWithPid:(int)pid task:(unsigned)task;	// 0x3558c141
- (void)dealloc;	// 0x3558c241
- (id)description;	// 0x3558c1cd
- (void)finalize;	// 0x3558c295
// converted property getter: - (int)pid;	// 0x3558c1bd
// converted property getter: - (unsigned)task;	// 0x3558c1ad
@end
