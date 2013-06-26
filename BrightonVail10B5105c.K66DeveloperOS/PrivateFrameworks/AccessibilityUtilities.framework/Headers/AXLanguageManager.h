/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class NSCharacterSet, AXDialectMap, NSString, NSArray, NSLocale;

@interface AXLanguageManager : NSObject {
	AXDialectMap *_dialectForSystemLanguage;	// 4 = 0x4
	AXDialectMap *_dialectForCurrentLocale;	// 8 = 0x8
	NSArray *_langMaps;	// 12 = 0xc
	NSCharacterSet *_commonCharacters;	// 16 = 0x10
	NSLocale *_userLocale;	// 20 = 0x14
}
@property(retain, nonatomic) NSCharacterSet *commonCharacters;	// G=0x31cb1ea1; S=0x31cb1eb1; @synthesize=_commonCharacters
@property(assign, nonatomic) AXDialectMap *dialectForCurrentLocale;	// G=0x31cb0cc9; S=0x31cb0cfd; 
@property(assign, nonatomic) AXDialectMap *dialectForSystemLanguage;	// G=0x31cb0c3d; S=0x31cb0c71; 
@property(retain, nonatomic) NSArray *langMaps;	// G=0x31cb1e81; S=0x31cb1e91; @synthesize=_langMaps
@property(readonly, assign, nonatomic) NSString *systemLanguageID;	// G=0x31cb0bc1; 
@property(copy, nonatomic) NSLocale *userLocale;	// G=0x31cb1ec1; S=0x31cb1ed5; @synthesize=_userLocale
+ (id)commonPunctuationCharacters;	// 0x31cb02f9
+ (id)nonlocalizedNameForLanguage:(id)language;	// 0x31cb01bd
+ (id)sharedInstance;	// 0x31cb0151
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)emojiDescriptions;	// 0x31cb036d
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)basicCharacters;	// 0x31cb0395
- (id)init;	// 0x31cb04bd
- (void)_handleUserLocaleDidChange:(id)_handleUserLocale;	// 0x31cb1e35
- (id)_loadLangMaps;	// 0x31cb1855
- (id)_preferredLanguageIDsFromUserSelectedKeyboards;	// 0x31cb1649
- (id)ambiguousDialectsFromUserKeyboardPreferences;	// 0x31cb10fd
- (id)basicDescription;	// 0x31cb08e5
// declared property getter: - (id)commonCharacters;	// 0x31cb1ea1
- (void)dealloc;	// 0x31cb0809
- (id)debugDescription;	// 0x31cb0941
- (id)description;	// 0x31cb08d5
- (id)descriptionOfWord:(id)word forLanguage:(id)language;	// 0x31cb1581
// declared property getter: - (id)dialectForCurrentLocale;	// 0x31cb0cc9
- (id)dialectForLanguageID:(id)languageID;	// 0x31cb0d55
// declared property getter: - (id)dialectForSystemLanguage;	// 0x31cb0c3d
- (id)dialectThatCanSpeakCharacter:(unsigned short)character;	// 0x31cb0fc5
- (BOOL)isCharacterCommon:(unsigned short)common;	// 0x31cb1231
// declared property getter: - (id)langMaps;	// 0x31cb1e81
// declared property setter: - (void)setCommonCharacters:(id)characters;	// 0x31cb1eb1
// declared property setter: - (void)setDialectForCurrentLocale:(id)currentLocale;	// 0x31cb0cfd
// declared property setter: - (void)setDialectForSystemLanguage:(id)systemLanguage;	// 0x31cb0c71
// declared property setter: - (void)setLangMaps:(id)maps;	// 0x31cb1e91
// declared property setter: - (void)setUserLocale:(id)locale;	// 0x31cb1ed5
// declared property getter: - (id)systemLanguageID;	// 0x31cb0bc1
- (void)updateCachedDialects;	// 0x31cb125d
// declared property getter: - (id)userLocale;	// 0x31cb1ec1
@end
