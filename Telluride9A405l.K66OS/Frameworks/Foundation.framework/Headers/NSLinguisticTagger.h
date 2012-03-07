/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSString, NSArray;

@interface NSLinguisticTagger : NSObject {
@private
	NSArray *_schemes;	// 4 = 0x4
	unsigned _options;	// 8 = 0x8
	NSString *_string;	// 12 = 0xc
	id _orthographyArray;	// 16 = 0x10
	id _tokenArray;	// 20 = 0x14
	id _reserved;	// 24 = 0x18
}
@property(retain) NSString *string;	// G=0x30371521; S=0x3037148d; converted property
+ (id)availableTagSchemesForLanguage:(id)language;	// 0x30370c25
+ (BOOL)supportsLanguage:(id)language;	// 0x30371419
- (id)initWithTagSchemes:(id)tagSchemes options:(unsigned)options;	// 0x30370ce9
- (BOOL)_acceptSentenceTerminatorRange:(NSRange)range paragraphRange:(NSRange)range2 tokens:(NSLTToken *)tokens count:(unsigned)count tokenIndex:(unsigned)index;	// 0x30374d75
- (void)_acceptSentencesForParagraphRange:(NSRange)paragraphRange;	// 0x303753a5
- (void)_analyzePunctuationTokensInRange:(NSRange)range paragraphRange:(NSRange)range2;	// 0x30375561
- (void)_analyzeTokensInInterwordRange:(NSRange)interwordRange paragraphRange:(NSRange)range;	// 0x30375d05
- (void)_analyzeTokensInWordRange:(NSRange)wordRange paragraphRange:(NSRange)range;	// 0x30375e11
- (void)_calculateSentenceRangesForParagraphRange:(NSRange)paragraphRange;	// 0x303754d1
- (id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates;	// 0x30371d11
- (id)_rankedCandidatesForMisspelledRange:(NSRange)misspelledRange candidates:(id)candidates contextualFrequencies:(id *)frequencies baseFrequencies:(id *)frequencies4;	// 0x30371bad
- (id)_tagSchemeForScheme:(id)scheme;	// 0x303712e5
- (id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange *)range requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x30377305
- (id)_tokenDataForParagraphAtIndex:(unsigned)index paragraphRange:(NSRange *)range tagScheme:(id)scheme;	// 0x303773f9
- (id)_tokenDataForParagraphRange:(NSRange)paragraphRange requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x30376569
- (void)_tokenizeParagraphAtIndex:(unsigned)index requireLemmas:(BOOL)lemmas requirePartsOfSpeech:(BOOL)speech requireNamedEntities:(BOOL)entities;	// 0x30377155
- (void)dealloc;	// 0x30371191
- (id)description;	// 0x30371219
- (void)enumerateTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options usingBlock:(id)block;	// 0x303774ad
- (id)orthographyAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x303718b1
- (id)possibleTagsAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange *)range sentenceRange:(NSRange *)range4 scores:(id *)scores;	// 0x303732c1
- (NSRange)sentenceRangeForRange:(NSRange)range;	// 0x30371a0d
- (void)setOrthography:(id)orthography range:(NSRange)range;	// 0x303716e5
// converted property setter: - (void)setString:(id)string;	// 0x3037148d
// converted property getter: - (id)string;	// 0x30371521
- (void)stringEditedInRange:(NSRange)range changeInLength:(int)length;	// 0x30371531
- (id)tagAtIndex:(unsigned)index scheme:(id)scheme tokenRange:(NSRange *)range sentenceRange:(NSRange *)range4;	// 0x30371d3d
- (id)tagSchemes;	// 0x303712d5
- (id)tagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options tokenRanges:(id *)ranges;	// 0x30374b01
@end

