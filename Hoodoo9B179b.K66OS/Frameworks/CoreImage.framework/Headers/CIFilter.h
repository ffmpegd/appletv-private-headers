/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "NSCoding.h"
#import "CoreImage-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class CIImage;

@interface CIFilter : NSObject <NSCoding, NSCopying> {
	void *_priv[8];	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CIImage *outputImage;	// G=0x36d56755; @dynamic
+ (id)_filterArrayFromProperties:(id)properties;	// 0x36d57aa9
+ (id)_filterArrayFromProperties:(id)properties inputImageExtent:(CGRect)extent;	// 0x36d5740d
+ (id)_propertyArrayFromFilters:(id)filters inputImageExtent:(CGRect)extent;	// 0x36d56d15
+ (id)customAttributes;	// 0x36d56cd1
+ (id)filterNamesInCategories:(id)categories;	// 0x36d56185
+ (id)filterNamesInCategory:(id)category;	// 0x36d56145
+ (id)filterWithName:(id)name;	// 0x36d56011
+ (id)filterWithName:(id)name keysAndValues:(id)values;	// 0x36d560e5
- (id)initWithCoder:(id)coder;	// 0x36d568e9
- (void)_copyAttributesTo:(id)to;	// 0x36d56a59
- (id)_copyFilterWithZone:(NSZone *)zone;	// 0x36d56a5d
- (id)_filterClassDescription;	// 0x36d56cd5
- (id)_initFromProperties:(id)properties;	// 0x36d57c55
- (BOOL)_isIdentity;	// 0x36d55f45
- (BOOL)_isIdentity;	// 0x36d56d0d
- (id)_outputProperties;	// 0x36d56d11
- (id)attributes;	// 0x36d56759
- (id)copyWithZone:(NSZone *)zone;	// 0x36d56a99
- (void)dealloc;	// 0x36d56635
- (id)description;	// 0x36d56b99
- (void)encodeWithCoder:(id)coder;	// 0x36d56785
- (unsigned)hash;	// 0x36d55f49
- (id)inputKeys;	// 0x36d56705
- (BOOL)isEqual:(id)equal;	// 0x36d55e1d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36d56b89
- (id)name;	// 0x36d56619
// declared property getter: - (id)outputImage;	// 0x36d56755
- (id)outputKeys;	// 0x36d5672d
- (void)setDefaults;	// 0x36d56781
@end

