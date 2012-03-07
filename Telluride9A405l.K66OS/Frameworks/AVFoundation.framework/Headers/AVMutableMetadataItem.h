/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMetadataItem.h"
#import "AVFoundation-Structs.h"

@class NSDictionary, NSLocale, AVMutableMetadataItemInternal, NSString;
@protocol NSCopying, NSObject;

@interface AVMutableMetadataItem : AVMetadataItem {
	AVMutableMetadataItemInternal *_mutablePriv;	// 8 = 0x8
}
@property(assign) XXStruct_pwHToB duration;	// G=0x3468c7e9; S=0x3468c8ad; 
@property(copy) NSDictionary *extraAttributes;	// G=0x3468c845; S=0x3468cf79; 
@property(copy) id<NSCopying, NSObject> key;	// G=0x3468c721; S=0x3468d119; 
@property(copy) NSString *keySpace;	// G=0x3468c745; S=0x3468d0a5; 
@property(copy) NSLocale *locale;	// G=0x3468c769; S=0x3468d041; 
@property(assign) XXStruct_pwHToB time;	// G=0x3468c78d; S=0x3468c869; 
@property(copy) id<NSCopying, NSObject> value;	// G=0x3468d18d; S=0x3468cfdd; 
+ (id)metadataItem;	// 0x3468cf09
- (id)copyWithZone:(NSZone *)zone;	// 0x3468cf4d
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3468c7e9
// declared property getter: - (id)extraAttributes;	// 0x3468c845
// declared property getter: - (id)key;	// 0x3468c721
// declared property getter: - (id)keySpace;	// 0x3468c745
// declared property getter: - (id)locale;	// 0x3468c769
// declared property setter: - (void)setDuration:(XXStruct_pwHToB)duration;	// 0x3468c8ad
// declared property setter: - (void)setExtraAttributes:(id)attributes;	// 0x3468cf79
// declared property setter: - (void)setKey:(id)key;	// 0x3468d119
// declared property setter: - (void)setKeySpace:(id)space;	// 0x3468d0a5
// declared property setter: - (void)setLocale:(id)locale;	// 0x3468d041
// declared property setter: - (void)setTime:(XXStruct_pwHToB)time;	// 0x3468c869
// declared property setter: - (void)setValue:(id)value;	// 0x3468cfdd
// declared property getter: - (XXStruct_pwHToB)time;	// 0x3468c78d
// declared property getter: - (id)value;	// 0x3468d18d
@end

