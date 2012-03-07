/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMULoadCommand : NSObject {
	unsigned long long _cmdSize;	// 4 = 0x4
	unsigned _command;	// 12 = 0xc
}
@property(readonly, assign) unsigned long long cmdSize;	// G=0x35bcdbe9; converted property
+ (id)loadCommandWithMemory:(id)memory;	// 0x35bcdcbd
- (id)initWithMemory:(id)memory;	// 0x35bcdc25
// converted property getter: - (unsigned long long)cmdSize;	// 0x35bcdbe9
- (BOOL)isDyLinker;	// 0x35bcdc0d
- (BOOL)isDySymTab;	// 0x35bcdc09
- (BOOL)isIDDyLib;	// 0x35bcdc15
- (BOOL)isLoadDyLib;	// 0x35bcdc11
- (BOOL)isSegment;	// 0x35bcdc19
- (BOOL)isSegment32;	// 0x35bcdc1d
- (BOOL)isSegment64;	// 0x35bcdc21
- (BOOL)isSymTab;	// 0x35bcdc05
- (BOOL)isUUID;	// 0x35bcdc01
@end

