/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library

@class CIImage;

@interface CIFilter : NSObject <NSCoding, NSCopying> {
	void *_priv[8];	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CIImage *outputImage;	// G=0x35874765; @dynamic
+ (id)_filterArrayFromProperties:(id)properties;	// 0x35875ab9
+ (id)_filterArrayFromProperties:(id)properties inputImageExtent:(CGRect)extent;	// 0x3587541d
+ (id)_propertyArrayFromFilters:(id)filters inputImageExtent:(CGRect)extent;	// 0x35874d25
+ (id)customAttributes;	// 0x35874ce1
+ (id)filterNamesInCategories:(id)categories;	// 0x35874195
+ (id)filterNamesInCategory:(id)category;	// 0x35874155
+ (id)filterWithName:(id)name;	// 0x35874021
+ (id)filterWithName:(id)name keysAndValues:(id)values;	// 0x358740f5
- (id)initWithCoder:(id)coder;	// 0x358748f9
- (void)_copyAttributesTo:(id)to;	// 0x35874a69
- (id)_copyFilterWithZone:(NSZone *)zone;	// 0x35874a6d
- (id)_filterClassDescription;	// 0x35874ce5
- (id)_initFromProperties:(id)properties;	// 0x35875c65
- (BOOL)_isIdentity;	// 0x35873f55
- (BOOL)_isIdentity;	// 0x35874d1d
- (id)_outputProperties;	// 0x35874d21
- (id)attributes;	// 0x35874769
- (id)copyWithZone:(NSZone *)zone;	// 0x35874aa9
- (void)dealloc;	// 0x35874645
- (id)description;	// 0x35874ba9
- (void)encodeWithCoder:(id)coder;	// 0x35874795
- (unsigned)hash;	// 0x35873f59
- (id)inputKeys;	// 0x35874715
- (BOOL)isEqual:(id)equal;	// 0x35873e2d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35874b99
- (id)name;	// 0x35874629
// declared property getter: - (id)outputImage;	// 0x35874765
- (id)outputKeys;	// 0x3587473d
- (void)setDefaults;	// 0x35874791
@end

