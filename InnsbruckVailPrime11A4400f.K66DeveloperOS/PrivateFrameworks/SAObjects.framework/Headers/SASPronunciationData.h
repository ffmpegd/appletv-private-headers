/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSLocale, NSString, NSArray;

@interface SASPronunciationData : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *apgId;	// G=0x326a83a1; S=0x326a83bd; 
@property(copy, nonatomic) NSString *asrPronunciationData;	// G=0x326a840d; S=0x326a8429; 
@property(copy, nonatomic) NSLocale *language;	// G=0x326a8479; S=0x326a8495; 
@property(copy, nonatomic) NSString *orthography;	// G=0x326a84e5; S=0x326a8501; 
@property(copy, nonatomic) NSArray *ttsPronunciations;	// G=0x326a8551; S=0x326a856d; 
@property(copy, nonatomic) NSString *ttsVersion;	// G=0x326a85bd; S=0x326a85d9; 
+ (id)pronunciationData;	// 0x326a8311
+ (id)pronunciationDataWithDictionary:(id)dictionary context:(id)context;	// 0x326a8355
// declared property getter: - (id)apgId;	// 0x326a83a1
// declared property getter: - (id)asrPronunciationData;	// 0x326a840d
- (id)encodedClassName;	// 0x326a8305
- (id)groupIdentifier;	// 0x326a82f5
// declared property getter: - (id)language;	// 0x326a8479
// declared property getter: - (id)orthography;	// 0x326a84e5
// declared property setter: - (void)setApgId:(id)anId;	// 0x326a83bd
// declared property setter: - (void)setAsrPronunciationData:(id)data;	// 0x326a8429
// declared property setter: - (void)setLanguage:(id)language;	// 0x326a8495
// declared property setter: - (void)setOrthography:(id)orthography;	// 0x326a8501
// declared property setter: - (void)setTtsPronunciations:(id)pronunciations;	// 0x326a856d
// declared property setter: - (void)setTtsVersion:(id)version;	// 0x326a85d9
// declared property getter: - (id)ttsPronunciations;	// 0x326a8551
// declared property getter: - (id)ttsVersion;	// 0x326a85bd
@end
