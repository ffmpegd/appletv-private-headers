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
@property(copy, nonatomic) NSString *command;	// G=0x37d0ae71; S=0x37d0ae85; @synthesize=_command
@property(retain, nonatomic) NSDictionary *invariantParam;	// G=0x37d0aecd; S=0x37d0aedd; @synthesize=_invariantParam
@property(retain, nonatomic) NSDictionary *variantParam;	// G=0x37d0ae95; S=0x37d0aea5; @synthesize=_variantParam
+ (id)command;	// 0x37d0aa8d
+ (id)commandwithCommand:(id)command variantParam:(id)param invariantParam:(id)param3;	// 0x37d0aac5
- (id)init;	// 0x37d0ab45
- (id)initWithCoder:(id)coder;	// 0x37d0ad8d
- (id)initWithCommand:(id)command variantParam:(id)param invariantParam:(id)param3;	// 0x37d0ab75
- (void).cxx_destruct;	// 0x37d0af05
- (BOOL)canBeGroupedWithCommand:(id)command;	// 0x37d0ac3d
// declared property getter: - (id)command;	// 0x37d0ae71
- (void)encodeWithCoder:(id)coder;	// 0x37d0acf1
// declared property getter: - (id)invariantParam;	// 0x37d0aecd
// declared property setter: - (void)setCommand:(id)command;	// 0x37d0ae85
// declared property setter: - (void)setInvariantParam:(id)param;	// 0x37d0aedd
// declared property setter: - (void)setVariantParam:(id)param;	// 0x37d0aea5
// declared property getter: - (id)variantParam;	// 0x37d0ae95
@end

