/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class AXDialectMap, NSArray, NSString;

@interface AXLangMap : NSObject {
	NSArray *_dialects;	// 4 = 0x4
	BOOL _western;	// 8 = 0x8
	BOOL _ambiguous;	// 9 = 0x9
	NSString *_generalLanguageID;	// 12 = 0xc
	AXDialectMap *_userPreferredDialect;	// 16 = 0x10
	NSArray *_alternateLanguageIDs;	// 20 = 0x14
}
@property(retain, nonatomic) NSArray *alternateLanguageIDs;	// G=0x33393a1d; S=0x33393a2d; @synthesize=_alternateLanguageIDs
@property(assign, nonatomic, getter=isAmbiguous) BOOL ambiguous;	// G=0x333939b9; S=0x333939c9; @synthesize=_ambiguous
@property(readonly, assign, nonatomic) AXDialectMap *defaultDialect;	// G=0x33393701; 
@property(retain, nonatomic) NSArray *dialects;	// G=0x33393979; S=0x33393989; @synthesize=_dialects
@property(copy, nonatomic) NSString *generalLanguageID;	// G=0x333939d9; S=0x333939ed; @synthesize=_generalLanguageID
@property(assign, nonatomic) AXDialectMap *userPreferredDialect;	// G=0x333939fd; S=0x33393a0d; @synthesize=_userPreferredDialect
@property(assign, nonatomic, getter=isWestern) BOOL western;	// G=0x33393999; S=0x333939a9; @synthesize=_western
- (id)initWithLanguageID:(id)languageID isWestern:(BOOL)western isAmbiguous:(BOOL)ambiguous dialects:(id)dialects alternateLanguageIDs:(id)ids;	// 0x33393259
// declared property getter: - (id)alternateLanguageIDs;	// 0x33393a1d
- (id)basicDescription;	// 0x33393505
- (void)dealloc;	// 0x33393475
- (id)debugDescription;	// 0x333935ad
// declared property getter: - (id)defaultDialect;	// 0x33393701
- (id)description;	// 0x333934f5
- (id)dialectWithLocaleIdentifier:(id)localeIdentifier;	// 0x33393879
// declared property getter: - (id)dialects;	// 0x33393979
// declared property getter: - (id)generalLanguageID;	// 0x333939d9
// declared property getter: - (BOOL)isAmbiguous;	// 0x333939b9
// declared property getter: - (BOOL)isWestern;	// 0x33393999
// declared property setter: - (void)setAlternateLanguageIDs:(id)ids;	// 0x33393a2d
// declared property setter: - (void)setAmbiguous:(BOOL)ambiguous;	// 0x333939c9
// declared property setter: - (void)setDialects:(id)dialects;	// 0x33393989
// declared property setter: - (void)setGeneralLanguageID:(id)anId;	// 0x333939ed
// declared property setter: - (void)setUserPreferredDialect:(id)dialect;	// 0x33393a0d
// declared property setter: - (void)setWestern:(BOOL)western;	// 0x333939a9
// declared property getter: - (id)userPreferredDialect;	// 0x333939fd
@end
