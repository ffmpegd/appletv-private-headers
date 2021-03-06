/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString, NSDictionary, AVMetadataItemInternal, NSLocale, NSNumber, NSDate, NSData;
@protocol NSObject;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
	AVMetadataItemInternal *_priv;	// 4 = 0x4
}
@property(readonly, assign) NSString *commonKey;	// G=0x366fd255; 
@property(readonly, assign) NSData *dataValue;	// G=0x366fb9b5; 
@property(readonly, assign) NSDate *dateValue;	// G=0x366fb8dd; 
@property(readonly, assign) XXStruct_pwHToB duration;	// G=0x366fd3a5; 
@property(readonly, assign) NSDictionary *extraAttributes;	// G=0x366fd47d; 
@property(readonly, assign) id<NSCopying, NSObject> key;	// G=0x366fd215; 
@property(readonly, assign) NSString *keySpace;	// G=0x366fd295; 
@property(readonly, assign) NSLocale *locale;	// G=0x366fd2d5; 
@property(readonly, assign) NSNumber *numberValue;	// G=0x366fb7a5; 
@property(readonly, assign) NSString *stringValue;	// G=0x366fb6e5; 
@property(readonly, assign) XXStruct_pwHToB time;	// G=0x366fd315; 
@property(readonly, assign) id<NSCopying, NSObject> value;	// G=0x366fd41d; 
+ (id)_figMetadataPropertyFromMetadataItems:(id)metadataItems;	// 0x366fcefd
+ (id)metadataItemsFromArray:(id)array filteredAndSortedAccordingToPreferredLanguages:(id)preferredLanguages;	// 0x366fbb21
+ (id)metadataItemsFromArray:(id)array withKey:(id)key keySpace:(id)space;	// 0x366fbe31
+ (id)metadataItemsFromArray:(id)array withLocale:(id)locale;	// 0x366fba35
+ (id)metadataItemsFromArray:(id)array withStringValue:(id)stringValue;	// 0x366fc0cd
- (id)init;	// 0x366fc181
- (void)_extractPropertiesFromDictionary:(id)dictionary;	// 0x366fb3bd
- (id)_figMetadataDictionary;	// 0x366fcc2d
- (id)_figMetadataFormat;	// 0x366fce09
- (id)_figMetadataProperties;	// 0x366fccfd
- (id)_initWithFigMetadataDictionary:(id)figMetadataDictionary;	// 0x366fc2cd
- (id)_initWithReader:(OpaqueFigMetadataReader *)reader itemIndex:(long)index;	// 0x366fc271
- (id)_keyAsString;	// 0x366fb5e1
- (void)_makePropertiesReady;	// 0x366fb2a9
- (void)_makeValueReady;	// 0x366fb209
- (void)_updateCommonKey;	// 0x366fb361
- (void)cancelLoading;	// 0x366fd4cd
// declared property getter: - (id)commonKey;	// 0x366fd255
- (id)copyWithZone:(NSZone *)zone;	// 0x366fc43d
// declared property getter: - (id)dataValue;	// 0x366fb9b5
// declared property getter: - (id)dateValue;	// 0x366fb8dd
- (void)dealloc;	// 0x366fc301
- (id)description;	// 0x366fc625
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x366fd3a5
// declared property getter: - (id)extraAttributes;	// 0x366fd47d
- (void)finalize;	// 0x366fc3e1
- (unsigned)hash;	// 0x366fcab1
- (CGImageRef)imageValue;	// 0x366fba31
- (BOOL)isEqual:(id)equal;	// 0x366fc801
// declared property getter: - (id)key;	// 0x366fd215
// declared property getter: - (id)keySpace;	// 0x366fd295
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x366fd4c1
// declared property getter: - (id)locale;	// 0x366fd2d5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x366fc465
// declared property getter: - (id)numberValue;	// 0x366fb7a5
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x366fd4bd
// declared property getter: - (id)stringValue;	// 0x366fb6e5
// declared property getter: - (XXStruct_pwHToB)time;	// 0x366fd315
// declared property getter: - (id)value;	// 0x366fd41d
@end

