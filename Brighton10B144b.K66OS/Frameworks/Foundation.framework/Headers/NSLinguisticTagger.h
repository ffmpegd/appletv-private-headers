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
	NSArray *_schemes;	// 4 = 0x4
	unsigned _options;	// 8 = 0x8
	NSString *_string;	// 12 = 0xc
	id _orthographyArray;	// 16 = 0x10
	id _tokenArray;	// 20 = 0x14
	id _reserved;	// 24 = 0x18
}
@property(retain) NSString *string;	// G=0x319daa85; S=0x319da9f9; converted property
+ (id)availableTagSchemesForLanguage:(id)language;	// 0x319da141
+ (BOOL)supportsLanguage:(id)language;	// 0x319da96d
- (id)initWithTagSchemes:(id)tagSchemes options:(unsigned)options;	// 0x319da209
- (BOOL)_acceptSentenceTerminatorRange:(NSRange)range paragraphRange:(NSRange)range2 tokens:(NSLTToken *)tokens count:(unsigned)count tokenIndex:(unsigned)index;	// 0x319de235
- (void)_acceptSentencesForParagraphRange:(NSRange)paragraphRange;	// 0x319de835
- (void)_analyzePunctuationTokensInRange:(NSRange)range paragraphRange:(NSRange)range2;	// 0x319de9f1
- (void)_analyzeTokensInInterwordRange:(NSRange)interwordRange paragraphRange:(NSRange)range;	// 0x319df0d9
- (void)_analyzeTokensInWordRange:(NSRange)wordRange paragraphRange:(NSRange)range;	// 0x319df1e1
- (void)_calculateSentenceRangesForParagraphRange:(NSRange)paragraphRange;	// 0x319de961
- (BOOL)_ngramTagsAndFrequenciesForMisspelledRange:(NSRange)misspelledRange word:(id)word tags:(id *)tags frequencies:(id *)frequencies;	// 0x319db261
- (id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates;	// 0x319db231
- (id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates contextualFrequencies:(id *)frequencies baseFrequencies:(id *)frequencies4;	// 0x319db0d9
- (id)_tagSchemeForScheme:(id)scheme;	// 0x319da839
- (id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange *)range requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x319e0635
- (id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange *)range tagScheme:(id)scheme;	// 0x319e0719
- (id)_tokenDataForParagraphRange:(NSRange)paragraphRange requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x319df8e1
- (void)_tokenizeParagraphAtIndex:(unsigned)index requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x319e0495
- (void)dealloc;	// 0x319da6dd
- (id)description;	// 0x319da769
- (void)enumerateTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options usingBlock:(id)block;	// 0x319e07d1
- (id)orthographyAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x319dae01
- (id)possibleTagsAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange *)range sentenceRange:(NSRange *)range4 scores:(id *)scores;	// 0x319dc779
- (NSRange)sentenceRangeForRange:(NSRange)range;	// 0x319daf49
- (void)setOrthography:(id)orthography range:(NSRange)range;	// 0x319dac39
// converted property setter: - (void)setString:(id)string;	// 0x319da9f9
// converted property getter: - (id)string;	// 0x319daa85
- (void)stringEditedInRange:(NSRange)range changeInLength:(int)length;	// 0x319daa95
- (id)tagAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange *)range sentenceRange:(NSRange *)range4;	// 0x319db289
- (id)tagSchemes;	// 0x319da829
- (id)tagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options tokenRanges:(id *)ranges;	// 0x319ddfb1
@end

