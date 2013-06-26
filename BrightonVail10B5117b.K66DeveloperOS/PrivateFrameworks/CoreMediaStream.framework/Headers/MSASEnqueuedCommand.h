/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSDictionary, NSString;

@interface MSASEnqueuedCommand : NSObject <NSCoding> {
	NSString *_command;	// 4 = 0x4
	NSDictionary *_variantParam;	// 8 = 0x8
	NSDictionary *_invariantParam;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *command;	// G=0x339dbe71; S=0x339dbe85; @synthesize=_command
@property(retain, nonatomic) NSDictionary *invariantParam;	// G=0x339dbecd; S=0x339dbedd; @synthesize=_invariantParam
@property(retain, nonatomic) NSDictionary *variantParam;	// G=0x339dbe95; S=0x339dbea5; @synthesize=_variantParam
+ (id)command;	// 0x339dba8d
+ (id)commandwithCommand:(id)command variantParam:(id)param invariantParam:(id)param3;	// 0x339dbac5
- (id)init;	// 0x339dbb45
- (id)initWithCoder:(id)coder;	// 0x339dbd8d
- (id)initWithCommand:(id)command variantParam:(id)param invariantParam:(id)param3;	// 0x339dbb75
- (void).cxx_destruct;	// 0x339dbf05
- (BOOL)canBeGroupedWithCommand:(id)command;	// 0x339dbc3d
// declared property getter: - (id)command;	// 0x339dbe71
- (void)encodeWithCoder:(id)coder;	// 0x339dbcf1
// declared property getter: - (id)invariantParam;	// 0x339dbecd
// declared property setter: - (void)setCommand:(id)command;	// 0x339dbe85
// declared property setter: - (void)setInvariantParam:(id)param;	// 0x339dbedd
// declared property setter: - (void)setVariantParam:(id)param;	// 0x339dbea5
// declared property getter: - (id)variantParam;	// 0x339dbe95
@end
