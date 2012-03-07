/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSString, NSArray, NSDate;
@protocol VMUMemory;

@interface VMUMachOHeader : VMUHeader {
	NSString *_name;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSString *_dsymPath;	// 12 = 0xc
	NSDate *_timestamp;	// 16 = 0x10
	id<VMUMemory> _memory;	// 20 = 0x14
	unsigned long long _address;	// 24 = 0x18
	unsigned long long _linkEditBase;	// 32 = 0x20
	NSArray *_loadCommands;	// 40 = 0x28
	long long _vmaddrSlide;	// 44 = 0x2c
	unsigned _fileType;	// 52 = 0x34
	unsigned _flags;	// 56 = 0x38
}
@property(readonly, assign) unsigned long long address;	// G=0x31f61be1; converted property
@property(retain) NSString *dsymPath;	// G=0x31f61ba1; S=0x31f61ce1; converted property
@property(readonly, assign) unsigned fileType;	// G=0x31f61c29; converted property
@property(readonly, assign) unsigned flags;	// G=0x31f61c39; converted property
@property(readonly, assign) unsigned long long linkEditBase;	// G=0x31f61bf9; converted property
@property(readonly, retain) NSArray *loadCommands;	// G=0x31f61bd1; converted property
@property(retain) NSString *name;	// G=0x31f61b81; S=0x31f61c61; converted property
@property(retain) NSString *path;	// G=0x31f61b91; S=0x31f61ca1; converted property
@property(retain) NSDate *timestamp;	// G=0x31f61bb1; S=0x31f61d21; converted property
@property(readonly, assign) long long vmaddrSlide;	// G=0x31f61c11; converted property
// converted property getter: - (unsigned long long)address;	// 0x31f61be1
- (id)architecture;	// 0x31f61d61
- (id)commpage;	// 0x31f6272d
- (unsigned)compatibilityVersion;	// 0x31f625e5
- (unsigned)currentVersion;	// 0x31f62559
- (void)dealloc;	// 0x31f62d1d
- (id)description;	// 0x31f62ca9
// converted property getter: - (id)dsymPath;	// 0x31f61ba1
- (id)dyLinkerPath;	// 0x31f624cd
- (id)dySymbolTable;	// 0x31f62451
// converted property getter: - (unsigned)fileType;	// 0x31f61c29
// converted property getter: - (unsigned)flags;	// 0x31f61c39
- (BOOL)isCommpage;	// 0x31f626fd
- (BOOL)isFromSharedCache;	// 0x31f61c49
- (BOOL)isMachO;	// 0x31f61c5d
- (BOOL)isProtected;	// 0x31f628f1
// converted property getter: - (unsigned long long)linkEditBase;	// 0x31f61bf9
// converted property getter: - (id)loadCommands;	// 0x31f61bd1
- (id)memory;	// 0x31f61bc1
// converted property getter: - (id)name;	// 0x31f61b81
// converted property getter: - (id)path;	// 0x31f61b91
- (id)regions;	// 0x31f61eed
- (id)sections;	// 0x31f61e29
- (id)segmentAddresses;	// 0x31f62985
- (id)segmentNamed:(id)named;	// 0x31f61d81
// converted property setter: - (void)setDsymPath:(id)path;	// 0x31f61ce1
// converted property setter: - (void)setName:(id)name;	// 0x31f61c61
// converted property setter: - (void)setPath:(id)path;	// 0x31f61ca1
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x31f61d21
- (id)signature;	// 0x31f62b15
- (id)symbolTable;	// 0x31f623d5
// converted property getter: - (id)timestamp;	// 0x31f61bb1
- (id)uuid;	// 0x31f62671
// converted property getter: - (long long)vmaddrSlide;	// 0x31f61c11
@end

