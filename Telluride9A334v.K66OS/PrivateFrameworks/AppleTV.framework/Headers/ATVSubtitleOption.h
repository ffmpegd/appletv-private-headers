/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMediaOption.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface ATVSubtitleOption : NSObject <ATVMediaOption> {
@private
	NSString *_languageCode;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
}
@property(readonly, retain) NSString *identifier;	// G=0x332eb7d9; converted property
@property(readonly, retain) NSString *languageCode;	// G=0x332eb7c9; converted property
+ (id)emptySubtitleOption;	// 0x332eb5a9
+ (id)subtitleOptionFromLanguageCode:(id)languageCode identifier:(id)identifier;	// 0x332eb5e5
- (id)initWithLanguageCode:(id)languageCode identifier:(id)identifier;	// 0x332eb625
- (void)dealloc;	// 0x332eb6a5
// converted property getter: - (id)identifier;	// 0x332eb7d9
- (BOOL)isEqual:(id)equal;	// 0x332eb705
// converted property getter: - (id)languageCode;	// 0x332eb7c9
- (id)localizedDisplayString;	// 0x332eb7e9
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x332eb78d
@end

