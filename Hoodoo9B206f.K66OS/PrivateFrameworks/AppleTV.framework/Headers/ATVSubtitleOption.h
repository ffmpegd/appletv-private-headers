/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMediaOption.h"
#import <NSObject.h> // Unknown library

@class NSNumber, NSString;

@interface ATVSubtitleOption : NSObject <ATVMediaOption> {
@private
	NSString *_languageCodeISO;	// 4 = 0x4
	NSString *_languageCodeBCP47;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSNumber *_trackIndex;	// 16 = 0x10
	NSString *_localizedDisplayString;	// 20 = 0x14
}
@property(readonly, retain) NSString *identifier;	// G=0x3677de05; converted property
@property(readonly, retain) NSString *languageCodeBCP47;	// G=0x3677de15; converted property
@property(retain) NSString *localizedDisplayString;	// G=0x3677de35; S=0x3677dec1; converted property
@property(readonly, retain) NSNumber *trackIndex;	// G=0x3677de25; converted property
+ (id)emptySubtitleOption;	// 0x3677db51
+ (id)subtitleOptionFromLanguageCodeISO:(id)languageCodeISO languageCodeBCP47:(id)a47 trackIndex:(id)index identifier:(id)identifier;	// 0x3677db99
- (id)initWithLanguageCodeISO:(id)languageCodeISO languageCodeBCP47:(id)a47 trackIndex:(id)index identifier:(id)identifier;	// 0x3677dbe5
- (void)dealloc;	// 0x3677dc95
- (id)description;	// 0x3677df01
// converted property getter: - (id)identifier;	// 0x3677de05
- (BOOL)isEqual:(id)equal;	// 0x3677dd31
- (id)languageCode;	// 0x3677ddf5
// converted property getter: - (id)languageCodeBCP47;	// 0x3677de15
// converted property getter: - (id)localizedDisplayString;	// 0x3677de35
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x3677ddb9
// converted property setter: - (void)setLocalizedDisplayString:(id)string;	// 0x3677dec1
// converted property getter: - (id)trackIndex;	// 0x3677de25
@end
