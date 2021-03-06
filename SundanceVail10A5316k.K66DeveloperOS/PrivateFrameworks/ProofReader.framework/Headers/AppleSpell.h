/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import "ProofReader-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSData, NSString, NSArray, NSMutableArray, NSMutableSet;

@interface AppleSpell : NSObject {
	void *_proofReaderConnection;	// 4 = 0x4
	CFDictionaryRef _databaseConnections;	// 8 = 0x8
	NSMutableDictionary *_bindicts;	// 12 = 0xc
	NSData *_globalBindictData;	// 16 = 0x10
	NSData *_globalNegBindictData;	// 20 = 0x14
	NSMutableDictionary *_autocorrections;	// 24 = 0x18
	NSString *_lastLanguage;	// 28 = 0x1c
	NSArray *_userPreferredLanguages;	// 32 = 0x20
	NSMutableDictionary *_learnedResponses;	// 36 = 0x24
	NSMutableArray *_diagnosticInfo;	// 40 = 0x28
	NSMutableSet *_foundNames;	// 44 = 0x2c
	double _lastFindNames;	// 48 = 0x30
	NSMutableDictionary *_lastSampleCollected;	// 56 = 0x38
	unsigned _numberOfSamplesCollected;	// 60 = 0x3c
	double _lastSampleCollection;	// 64 = 0x40
	NSMutableArray *_retainedSamples;	// 72 = 0x48
	NSMutableDictionary *_lastSampleRecorded;	// 76 = 0x4c
	double _lastSampleRecording;	// 80 = 0x50
	BOOL _userPrefersUncheckedLatinLanguage;	// 88 = 0x58
}
@property(readonly, retain) NSData *globalBindictData;	// G=0x33cfeab1; converted property
- (id)init;	// 0x33cf5109
- (BOOL)_checkEnglishGrammarInString:(id)string range:(NSRange)range indexIntoBuffer:(unsigned)buffer bufferLength:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io retval:(int *)retval errorRange:(NSRange *)range10 details:(id *)details;	// 0x33d52411
- (BOOL)_checkGrammarInString:(id)string range:(NSRange)range language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io errorRange:(NSRange *)range7 details:(id *)details;	// 0x33d06de1
- (id)_correctionForString:(id)string range:(NSRange)range inString:(id)string3 tagger:(id)tagger taggerIndex:(unsigned)index dictionary:(id)dictionary language:(id)language connection:(PR_DB_IO *)connection keyEventData:(id)data;	// 0x33d55099
- (id)_correctionForSuggestedPhrase:(const char *)suggestedPhrase originalBuffer:(const char *)buffer length:(unsigned)length;	// 0x33d5215d
- (id)_crudeNextWordInString:(id)string inRange:(NSRange)range;	// 0x33d51ce5
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range;	// 0x33d51f25
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range precededBy:(id *)by;	// 0x33d51dd1
- (id)_detailWithRange:(NSRange)range description:(id)description corrections:(id)corrections;	// 0x33d5237d
- (id)_japaneseCorrectionForString:(id)string connection:(PR_DB_IO *)connection;	// 0x33d54ef9
- (id)_modifiedGrammarDescriptionForDescription:(id)description;	// 0x33d51f49
- (id)_orthographyByModifyingOrthography:(id)orthography withLatinLanguage:(id)latinLanguage;	// 0x33d0735d
- (void)addModifiedPartialPinyinToArray:(id)array connection:(PR_DB_IO *)connection fromIndex:(unsigned)index prevIndex:(unsigned)index4 prevPrevIndex:(unsigned)index5 prePrevPrevIndex:(unsigned)index6 startingModificationsAt:(unsigned)at inBuffer:(char *)buffer length:(unsigned)length initialSyllableCount:(unsigned)count initialScore:(unsigned)score prevScore:(unsigned)score12 prevPrevScore:(unsigned)score13 lastSyllableScore:(unsigned)score14;	// 0x33d5c425
- (void)addModifiedPinyinToArray:(id)array connection:(PR_DB_IO *)connection fromIndex:(unsigned)index prevIndex:(unsigned)index4 prevPrevIndex:(unsigned)index5 startingModificationsAt:(unsigned)at inBuffer:(char *)buffer length:(unsigned)length initialSyllableCount:(unsigned)count initialScore:(unsigned)score prevScore:(unsigned)score11 prevPrevScore:(unsigned)score12 lastSyllableScore:(unsigned)score13 couldBeAbbreviatedPinyin:(BOOL)pinyin;	// 0x33d5a729
- (id)autocorrectionDictionaryForLanguage:(id)language;	// 0x33d06a79
- (id)bindictDataForLanguage:(id)language index:(unsigned)index;	// 0x33cfc9bd
- (id)bundle;	// 0x33cf6e91
- (BOOL)checkWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding index:(unsigned)index;	// 0x33cfe561
- (PR_DB_IO *)databaseConnectionForLanguage:(id)language;	// 0x33cf6691
- (unsigned long)encodingForLanguage:(id)language;	// 0x33cf65f1
- (id)englishStringFromWordBuffer:(char *)wordBuffer length:(unsigned)length connection:(PR_DB_IO *)connection ignoreLength:(BOOL)length4;	// 0x33d5a259
- (id)fallbackLocalizationForLanguage:(id)language;	// 0x33d066e1
// converted property getter: - (id)globalBindictData;	// 0x33cfeab1
- (BOOL)globalCheckNegativeWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;	// 0x33d06bc1
- (BOOL)globalCheckWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;	// 0x33cfe9c9
- (id)globalNegativeBindictData;	// 0x33d069d9
- (id)localizationForLanguage:(id)language;	// 0x33cf62e9
- (id)localizationsForLanguage:(id)language;	// 0x33d06331
- (BOOL)looksLikeAdverb:(id)adverb language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x33d51751
- (BOOL)looksLikeArticledNoun:(id)noun language:(id)language connection:(PR_DB_IO *)connection;	// 0x33d516a1
- (BOOL)looksLikeParticiple:(id)participle language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x33d518dd
- (BOOL)onContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x33d51aa9
- (BOOL)onNoContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x33d51cb5
- (void)resetTimer;	// 0x33cf619d
- (id)spellServer:(id)server _retainedAlternativesForPinyinInputString:(id)pinyinInputString extended:(BOOL)extended;	// 0x33d5cc65
- (id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString;	// 0x33d5d48d
- (id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x33d09001
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string language:(id)language details:(id *)details;	// 0x33d072f5
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string range:(NSRange)range language:(id)language orthography:(id)orthography mutableResults:(id)results offset:(unsigned)offset details:(id *)details;	// 0x33d07011
- (id)spellServer:(id)server checkString:(id)string offset:(unsigned)offset types:(unsigned long long)types options:(id)options orthography:(id)orthography wordCount:(int *)count;	// 0x33d084d1
- (id)spellServer:(id)server extendedAlternativesForPinyinInputString:(id)pinyinInputString;	// 0x33d5d4c1
- (id)spellServer:(id)server extendedAlternativesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x33d09011
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only;	// 0x33d08399
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x33cf61a5
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string range:(NSRange)range languages:(id)languages orthography:(id)orthography checkOrthography:(BOOL)orthography6 mutableResults:(id)results offset:(unsigned)offset autocorrect:(BOOL)autocorrect keyEventData:(id)data appIdentifier:(id)identifier wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x33d0740d
- (id)spellServer:(id)server prefixesForPinyinInputString:(id)pinyinInputString;	// 0x33d5d4f5
- (id)spellServer:(id)server prefixesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x33d09021
- (id)spellServer:(id)server stringForInputString:(id)inputString language:(id)language;	// 0x33d08c51
- (id)spellServer:(id)server suggestCompletionsForPartialWord:(id)partialWord inLanguage:(id)language;	// 0x33d5994d
- (id)spellServer:(id)server suggestCompletionsForPartialWordRange:(NSRange)partialWordRange inString:(id)string language:(id)language;	// 0x33d08be1
- (id)spellServer:(id)server suggestGuessesForWord:(id)word inLanguage:(id)language;	// 0x33d56e99
- (id)spellServer:(id)server suggestGuessesForWordRange:(NSRange)wordRange inString:(id)string language:(id)language;	// 0x33d08b9d
- (id)spellServer:(id)server suggestWordWithLengthInRange:(NSRange)range language:(id)language;	// 0x33d08c25
- (id)spellServer:(id)server suggestWordWithMinimumLength:(unsigned)minimumLength maximumLength:(unsigned)length language:(id)language;	// 0x33d59c51
- (void)timeout:(id)timeout;	// 0x33d06329
- (BOOL)validateAbbreviationOrNumberWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x33cfe261
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length connection:(PR_DB_IO *)connection;	// 0x33cfeb51
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender checkBase:(BOOL)base checkDict:(BOOL)dict checkNames:(BOOL)names checkHyphens:(BOOL)hyphens checkIntercaps:(BOOL)intercaps checkOptions:(BOOL)options depth:(unsigned)depth;	// 0x33cfce45
- (BOOL)validateWordPrefixBuffer:(char *)buffer length:(unsigned)length connection:(PR_DB_IO *)connection;	// 0x33d06d1d
@end

