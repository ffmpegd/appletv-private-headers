/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"


@interface VMUSymTabLoadCommand : VMULoadCommand {
	unsigned _symoff;	// 16 = 0x10
	unsigned _nsyms;	// 20 = 0x14
	unsigned _stroff;	// 24 = 0x18
	unsigned _strsize;	// 28 = 0x1c
}
@property(readonly, assign) unsigned nsyms;	// G=0x31198d8d; converted property
@property(readonly, assign) unsigned stroff;	// G=0x31198d9d; converted property
@property(readonly, assign) unsigned strsize;	// G=0x31198dad; converted property
@property(readonly, assign) unsigned symoff;	// G=0x31198d7d; converted property
- (id)initWithMemory:(id)memory;	// 0x31198dbd
- (BOOL)isSymTab;	// 0x31198d79
// converted property getter: - (unsigned)nsyms;	// 0x31198d8d
// converted property getter: - (unsigned)stroff;	// 0x31198d9d
// converted property getter: - (unsigned)strsize;	// 0x31198dad
// converted property getter: - (unsigned)symoff;	// 0x31198d7d
@end
