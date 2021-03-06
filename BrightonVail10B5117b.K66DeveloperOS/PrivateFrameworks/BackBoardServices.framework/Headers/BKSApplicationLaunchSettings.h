/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"
#import "BackBoardServices-Structs.h"

@class NSString, NSDictionary, NSArray;

@interface BKSApplicationLaunchSettings : NSObject <NSCopying, BKSXPCCoding> {
	NSDictionary *_environment;	// 4 = 0x4
	BOOL _waitForDebugger;	// 8 = 0x8
	BOOL _disableASLR;	// 9 = 0x9
	BOOL _checkForLeaks;	// 10 = 0xa
	NSArray *_arguments;	// 12 = 0xc
	NSString *_standardOut;	// 16 = 0x10
	NSString *_standardError;	// 20 = 0x14
}
@property(retain, nonatomic) NSArray *arguments;	// G=0x336b94c5; S=0x336b94d5; @synthesize=_arguments
@property(assign, nonatomic) BOOL checkForLeaks;	// G=0x336b94a5; S=0x336b94b5; @synthesize=_checkForLeaks
@property(assign, nonatomic) BOOL disableASLR;	// G=0x336b9485; S=0x336b9495; @synthesize=_disableASLR
@property(retain, nonatomic) NSDictionary *environment;	// G=0x336b9445; S=0x336b9455; @synthesize=_environment
@property(copy, nonatomic) NSString *standardError;	// G=0x336b9509; S=0x336b951d; @synthesize=_standardError
@property(copy, nonatomic) NSString *standardOut;	// G=0x336b94e5; S=0x336b94f9; @synthesize=_standardOut
@property(assign, nonatomic) BOOL waitForDebugger;	// G=0x336b9465; S=0x336b9475; @synthesize=_waitForDebugger
- (id)initWithSettings:(id)settings zone:(NSZone *)zone;	// 0x336b8e79
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x336b924d
// declared property getter: - (id)arguments;	// 0x336b94c5
// declared property getter: - (BOOL)checkForLeaks;	// 0x336b94a5
- (id)copyWithZone:(NSZone *)zone;	// 0x336b9211
- (void)dealloc;	// 0x336b8fc9
- (id)description;	// 0x336b9055
// declared property getter: - (BOOL)disableASLR;	// 0x336b9485
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x336b9355
// declared property getter: - (id)environment;	// 0x336b9445
// declared property setter: - (void)setArguments:(id)arguments;	// 0x336b94d5
// declared property setter: - (void)setCheckForLeaks:(BOOL)leaks;	// 0x336b94b5
// declared property setter: - (void)setDisableASLR:(BOOL)aslr;	// 0x336b9495
// declared property setter: - (void)setEnvironment:(id)environment;	// 0x336b9455
// declared property setter: - (void)setStandardError:(id)error;	// 0x336b951d
// declared property setter: - (void)setStandardOut:(id)anOut;	// 0x336b94f9
// declared property setter: - (void)setWaitForDebugger:(BOOL)debugger;	// 0x336b9475
// declared property getter: - (id)standardError;	// 0x336b9509
// declared property getter: - (id)standardOut;	// 0x336b94e5
// declared property getter: - (BOOL)waitForDebugger;	// 0x336b9465
@end

