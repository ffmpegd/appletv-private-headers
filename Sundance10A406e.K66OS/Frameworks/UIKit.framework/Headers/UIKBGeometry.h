/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	XXStruct_tp$7nC m_x;	// 8 = 0x8
	XXStruct_tp$7nC m_y;	// 16 = 0x10
	XXStruct_tp$7nC m_w;	// 24 = 0x18
	XXStruct_tp$7nC m_h;	// 32 = 0x20
	XXStruct_tp$7nC m_paddingTop;	// 40 = 0x28
	XXStruct_tp$7nC m_paddingLeft;	// 48 = 0x30
	XXStruct_tp$7nC m_paddingBottom;	// 56 = 0x38
	XXStruct_tp$7nC m_paddingRight;	// 64 = 0x40
	BOOL m_explicitlySpecified;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x30bccec9; S=0x30bcced9; @synthesize=m_explicitlySpecified
@property(assign, nonatomic, setter=setH:) XXStruct_tp$7nC h;	// G=0x30bcce51; S=0x30bcc255; @synthesize=m_h
@property(retain, nonatomic) NSString *name;	// G=0x30bccdf9; S=0x30bcc19d; @synthesize=m_name
@property(assign, nonatomic, setter=setPaddingBottom:) XXStruct_tp$7nC paddingBottom;	// G=0x30bcce99; S=0x30bcc2cd; @synthesize=m_paddingBottom
@property(assign, nonatomic, setter=setPaddingLeft:) XXStruct_tp$7nC paddingLeft;	// G=0x30bcce81; S=0x30bcc2a5; @synthesize=m_paddingLeft
@property(assign, nonatomic, setter=setPaddingRight:) XXStruct_tp$7nC paddingRight;	// G=0x30bcceb1; S=0x30bcc2f5; @synthesize=m_paddingRight
@property(assign, nonatomic, setter=setPaddingTop:) XXStruct_tp$7nC paddingTop;	// G=0x30bcce69; S=0x30bcc27d; @synthesize=m_paddingTop
@property(assign, nonatomic, setter=setW:) XXStruct_tp$7nC w;	// G=0x30bcce39; S=0x30bcc22d; @synthesize=m_w
@property(assign, nonatomic, setter=setX:) XXStruct_tp$7nC x;	// G=0x30bcce09; S=0x30bcc1dd; @synthesize=m_x
@property(assign, nonatomic, setter=setY:) XXStruct_tp$7nC y;	// G=0x30bcce21; S=0x30bcc205; @synthesize=m_y
+ (id)geometry;	// 0x30bcb4c1
+ (id)geometryWithRect:(CGRect)rect;	// 0x30bcb509
- (id)init;	// 0x30bcb6d5
- (id)initWithCoder:(id)coder;	// 0x30bcb765
- (id)initWithName:(id)name rect:(XXStruct_bVmAfD)rect padding:(XXStruct_bVmAfD)padding;	// 0x30bcb5ad
- (id)copyWithZone:(NSZone *)zone;	// 0x30bcbbfd
- (void)dealloc;	// 0x30bcb719
- (id)description;	// 0x30bcc31d
- (void)encodeWithCoder:(id)coder;	// 0x30bcb9c9
// declared property getter: - (BOOL)explicitlySpecified;	// 0x30bccec9
- (CGRect)frame;	// 0x30bcc769
- (CGRect)frameWithContainingFrame:(CGRect)containingFrame;	// 0x30bcc7a1
// declared property getter: - (XXStruct_tp$7nC)h;	// 0x30bcce51
- (BOOL)isEqual:(id)equal;	// 0x30bcbe35
// declared property getter: - (id)name;	// 0x30bccdf9
- (id)overrideGeometry:(id)geometry;	// 0x30bccad9
- (CGRect)paddedFrameWithContainingFrame:(CGRect)containingFrame;	// 0x30bcc8f9
- (CGRect)paddedFrameWithResolvedFrame:(CGRect)resolvedFrame;	// 0x30bcc965
// declared property getter: - (XXStruct_tp$7nC)paddingBottom;	// 0x30bcce99
// declared property getter: - (XXStruct_tp$7nC)paddingLeft;	// 0x30bcce81
// declared property getter: - (XXStruct_tp$7nC)paddingRight;	// 0x30bcceb1
// declared property getter: - (XXStruct_tp$7nC)paddingTop;	// 0x30bcce69
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x30bcced9
// declared property setter: - (void)setH:(XXStruct_tp$7nC)h;	// 0x30bcc255
// declared property setter: - (void)setName:(id)name;	// 0x30bcc19d
// declared property setter: - (void)setPaddingBottom:(XXStruct_tp$7nC)bottom;	// 0x30bcc2cd
// declared property setter: - (void)setPaddingLeft:(XXStruct_tp$7nC)left;	// 0x30bcc2a5
// declared property setter: - (void)setPaddingRight:(XXStruct_tp$7nC)right;	// 0x30bcc2f5
// declared property setter: - (void)setPaddingTop:(XXStruct_tp$7nC)top;	// 0x30bcc27d
// declared property setter: - (void)setW:(XXStruct_tp$7nC)w;	// 0x30bcc22d
// declared property setter: - (void)setX:(XXStruct_tp$7nC)x;	// 0x30bcc1dd
// declared property setter: - (void)setY:(XXStruct_tp$7nC)y;	// 0x30bcc205
- (id)shortDescription;	// 0x30bcc5d9
- (BOOL)usesPercentages;	// 0x30bccce1
// declared property getter: - (XXStruct_tp$7nC)w;	// 0x30bcce39
// declared property getter: - (XXStruct_tp$7nC)x;	// 0x30bcce09
// declared property getter: - (XXStruct_tp$7nC)y;	// 0x30bcce21
@end

