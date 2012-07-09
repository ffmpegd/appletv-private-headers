/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSArray, NSString;

@interface NSLinguisticTagger : NSObject {
@private
	NSArray *_schemes;	// 4 = 0x4
	unsigned _options;	// 8 = 0x8
	NSString *_string;	// 12 = 0xc
	id _orthographyArray;	// 16 = 0x10
	id _tokenArray;	// 20 = 0x14
	id _reserved;	// 24 = 0x18
}
@property(retain) NSString *string;	// G=0x31b0aa21; S=0x31b0a995; converted property
+ (id)availableTagSchemesForLanguage:(id)language;	// 0x31b0a109
+ (BOOL)supportsLanguage:(id)language;	// 0x31b0a909
- (id)initWithTagSchemes:(id)tagSchemes options:(unsigned)options;	// 0x31b0a1d1
- (BOOL)_acceptSentenceTerminatorRange:(NSRange)range paragraphRange:(NSRange)range2 tokens:(NSLTToken *)tokens count:(unsigned)count tokenIndex:(unsigned)index;	// 0x31b0e1d1
- (void)_acceptSentencesForParagraphRange:(NSRange)paragraphRange;	// 0x31b0e7d1
- (void)_analyzePunctuationTokensInRange:(NSRange)range paragraphRange:(NSRange)range2;	// 0x31b0e98d
- (void)_analyzeTokensInInterwordRange:(NSRange)interwordRange paragraphRange:(NSRange)range;	// 0x31b0f075
- (void)_analyzeTokensInWordRange:(NSRange)wordRange paragraphRange:(NSRange)range;	// 0x31b0f17d
- (void)_calculateSentenceRangesForParagraphRange:(NSRange)paragraphRange;	// 0x31b0e8fd
- (BOOL)_ngramTagsAndFrequenciesForMisspelledRange:(NSRange)misspelledRange word:(id)word tags:(id *)tags frequencies:(id *)frequencies;	// 0x31b0b1fd
- (id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates;	// 0x31b0b1cd
- (id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates contextualFrequencies:(id *)frequencies baseFrequencies:(id *)frequencies4;	// 0x31b0b075
- (id)_tagSchemeForScheme:(id)scheme;	// 0x31b0a7d5
- (id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange *)range requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x31b105d1
- (id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange *)range tagScheme:(id)scheme;	// 0x31b106b5
- (id)_tokenDataForParagraphRange:(NSRange)paragraphRange requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x31b0f87d
- (void)_tokenizeParagraphAtIndex:(unsigned)index requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x31b10431
- (void)dealloc;	// 0x31b0a679
- (id)description;	// 0x31b0a705
- (void)enumerateTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options usingBlock:(id)block;	// 0x31b1076d
- (id)orthographyAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x31b0ad9d
- (id)possibleTagsAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange *)range sentenceRange:(NSRange *)range4 scores:(id *)scores;	// 0x31b0c715
- (NSRange)sentenceRangeForRange:(NSRange)range;	// 0x31b0aee5
- (void)setOrthography:(id)orthography range:(NSRange)range;	// 0x31b0abd5
// converted property setter: - (void)setString:(id)string;	// 0x31b0a995
// converted property getter: - (id)string;	// 0x31b0aa21
- (void)stringEditedInRange:(NSRange)range changeInLength:(int)length;	// 0x31b0aa31
- (id)tagAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange *)range sentenceRange:(NSRange *)range4;	// 0x31b0b225
- (id)tagSchemes;	// 0x31b0a7c5
- (id)tagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options tokenRanges:(id *)ranges;	// 0x31b0df4d
@end
