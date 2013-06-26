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
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x32fa9851; S=0x32fa9861; @synthesize=m_explicitlySpecified
@property(assign, nonatomic, setter=setH:) XXStruct_tp$7nC h;	// G=0x32fa97d9; S=0x32fa8bdd; @synthesize=m_h
@property(retain, nonatomic) NSString *name;	// G=0x32fa9781; S=0x32fa8b25; @synthesize=m_name
@property(assign, nonatomic, setter=setPaddingBottom:) XXStruct_tp$7nC paddingBottom;	// G=0x32fa9821; S=0x32fa8c55; @synthesize=m_paddingBottom
@property(assign, nonatomic, setter=setPaddingLeft:) XXStruct_tp$7nC paddingLeft;	// G=0x32fa9809; S=0x32fa8c2d; @synthesize=m_paddingLeft
@property(assign, nonatomic, setter=setPaddingRight:) XXStruct_tp$7nC paddingRight;	// G=0x32fa9839; S=0x32fa8c7d; @synthesize=m_paddingRight
@property(assign, nonatomic, setter=setPaddingTop:) XXStruct_tp$7nC paddingTop;	// G=0x32fa97f1; S=0x32fa8c05; @synthesize=m_paddingTop
@property(assign, nonatomic, setter=setW:) XXStruct_tp$7nC w;	// G=0x32fa97c1; S=0x32fa8bb5; @synthesize=m_w
@property(assign, nonatomic, setter=setX:) XXStruct_tp$7nC x;	// G=0x32fa9791; S=0x32fa8b65; @synthesize=m_x
@property(assign, nonatomic, setter=setY:) XXStruct_tp$7nC y;	// G=0x32fa97a9; S=0x32fa8b8d; @synthesize=m_y
+ (id)geometry;	// 0x32fa7e49
+ (id)geometryWithRect:(CGRect)rect;	// 0x32fa7e91
- (id)init;	// 0x32fa805d
- (id)initWithCoder:(id)coder;	// 0x32fa80ed
- (id)initWithName:(id)name rect:(XXStruct_bVmAfD)rect padding:(XXStruct_bVmAfD)padding;	// 0x32fa7f35
- (id)copyWithZone:(NSZone *)zone;	// 0x32fa8585
- (void)dealloc;	// 0x32fa80a1
- (id)description;	// 0x32fa8ca5
- (void)encodeWithCoder:(id)coder;	// 0x32fa8351
// declared property getter: - (BOOL)explicitlySpecified;	// 0x32fa9851
- (CGRect)frame;	// 0x32fa90f1
- (CGRect)frameWithContainingFrame:(CGRect)containingFrame;	// 0x32fa9129
// declared property getter: - (XXStruct_tp$7nC)h;	// 0x32fa97d9
- (BOOL)isEqual:(id)equal;	// 0x32fa87bd
// declared property getter: - (id)name;	// 0x32fa9781
- (id)overrideGeometry:(id)geometry;	// 0x32fa9461
- (CGRect)paddedFrameWithContainingFrame:(CGRect)containingFrame;	// 0x32fa9281
- (CGRect)paddedFrameWithResolvedFrame:(CGRect)resolvedFrame;	// 0x32fa92ed
// declared property getter: - (XXStruct_tp$7nC)paddingBottom;	// 0x32fa9821
// declared property getter: - (XXStruct_tp$7nC)paddingLeft;	// 0x32fa9809
// declared property getter: - (XXStruct_tp$7nC)paddingRight;	// 0x32fa9839
// declared property getter: - (XXStruct_tp$7nC)paddingTop;	// 0x32fa97f1
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x32fa9861
// declared property setter: - (void)setH:(XXStruct_tp$7nC)h;	// 0x32fa8bdd
// declared property setter: - (void)setName:(id)name;	// 0x32fa8b25
// declared property setter: - (void)setPaddingBottom:(XXStruct_tp$7nC)bottom;	// 0x32fa8c55
// declared property setter: - (void)setPaddingLeft:(XXStruct_tp$7nC)left;	// 0x32fa8c2d
// declared property setter: - (void)setPaddingRight:(XXStruct_tp$7nC)right;	// 0x32fa8c7d
// declared property setter: - (void)setPaddingTop:(XXStruct_tp$7nC)top;	// 0x32fa8c05
// declared property setter: - (void)setW:(XXStruct_tp$7nC)w;	// 0x32fa8bb5
// declared property setter: - (void)setX:(XXStruct_tp$7nC)x;	// 0x32fa8b65
// declared property setter: - (void)setY:(XXStruct_tp$7nC)y;	// 0x32fa8b8d
- (id)shortDescription;	// 0x32fa8f61
- (BOOL)usesPercentages;	// 0x32fa9669
// declared property getter: - (XXStruct_tp$7nC)w;	// 0x32fa97c1
// declared property getter: - (XXStruct_tp$7nC)x;	// 0x32fa9791
// declared property getter: - (XXStruct_tp$7nC)y;	// 0x32fa97a9
@end
