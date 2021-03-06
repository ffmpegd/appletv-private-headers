/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <CTGlyphStorageInterface.h> // Unknown library

@class NSString, NSATSTypesetter;

__attribute__((visibility("hidden")))
@interface NSATSGlyphStorage : CTGlyphStorageInterface {
	CTGlyphStorageRef _glyphStorage;	// 28 = 0x1c
	CFArrayRef _masterRuns;	// 32 = 0x20
	NSATSTypesetter *_typesetter;	// 36 = 0x24
	XXStruct_STZzmD *_runs;	// 40 = 0x28
	long _numRuns;	// 44 = 0x2c
	long _runBufferSize;	// 48 = 0x30
	NSRange _glyphRange;	// 52 = 0x34
	NSRange _characterRange;	// 60 = 0x3c
	long _bufferSize;	// 68 = 0x44
	NSATSGlyphStorage *_parent;	// 72 = 0x48
	CFSetRef _children;	// 76 = 0x4c
	long _paraEndElasticCharIndex;	// 80 = 0x50
	float _paraEndElasticCharWidth;	// 84 = 0x54
	NSString *_textString;	// 88 = 0x58
	XXStruct_G_BSZB *_stack;	// 92 = 0x5c
	const XXStruct_STZzmD *_lastElasticRun;	// 96 = 0x60
	long _lastElasticRunLocation;	// 100 = 0x64
	long _totalAbsorbedCount;	// 104 = 0x68
	struct {
		unsigned _hasNonNominalGlyph : 1;
		unsigned _hasPositionalStake : 1;
		unsigned _hasBidiRun : 1;
		unsigned _isEllipsisStorage : 1;
		unsigned _hasNonNominalStringIndexes : 1;
		unsigned _isUnordered : 1;
		unsigned _hasTotalAbsorbedCount : 1;
		unsigned _reserved : 25;
	} _gFlags;	// 108 = 0x6c
}
@property(readonly, retain) NSATSTypesetter *typesetter;	// G=0x36be5ad5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x36be58b1
- (void)initGlyphStack:(long)stack;	// 0x36be9dd5
- (id)initWithTypesetter:(id)typesetter;	// 0x36be5ac5
- (const XXStruct_STZzmD *)_attributeRunForCharacterAtIndex:(long)index;	// 0x36be8e4d
- (NSRange)_collectElasticRangeSurroundingCharacterAtIndex:(long)index minimumCharacterIndex:(long)index2;	// 0x36be83a9
- (CTRunRef)_createEllipsisRunWithStringRange:(XXStruct_ny2fMB)stringRange attributes:(CFDictionaryRef)attributes;	// 0x36be74d9
- (void)_flushCachedObjects;	// 0x36be5a31
- (void)_invalidate;	// 0x36be5a7d
- (BOOL)_isDeallocating;	// 0x36be5925
- (bool)_resolvePositionalStakeGlyphsForLineFragment:(CTLineRef)lineFragment lineFragmentRect:(CGRect)rect minPosition:(float)position maxPosition:(float)position4 maxLineFragmentWidth:(float)width breakHint:(int *)hint;	// 0x36be7921
- (BOOL)_tryRetain;	// 0x36be5921
- (float)_widthForStringRange:(NSRange)stringRange;	// 0x36be8abd
- (id)childGlyphStorageWithCharacterRange:(NSRange)characterRange;	// 0x36be7361
- (CTTypesetterRef)createCTTypesetter;	// 0x36be6bb5
- (CTGlyphStorageRef)createCopy:(XXStruct_ny2fMB)copy;	// 0x36be9049
- (void)dealloc;	// 0x36be8e9d
- (void)disposeGlyphStack;	// 0x36be9fd9
- (void)finalize;	// 0x36be8f8d
- (void)getCustomAdvance:(CGSize *)advance forIndex:(long)index;	// 0x36be94ad
- (void)insertGlyphs:(XXStruct_ny2fMB)glyphs;	// 0x36be9a85
- (void)moveGlyphsTo:(long)to from:(XXStruct_ny2fMB)from;	// 0x36be98fd
- (void)popGlyph:(long)glyph;	// 0x36be9ef9
- (void)pushGlyph:(long)glyph;	// 0x36be9e31
- (oneway void)release;	// 0x36be5929
- (void)setAbsorbedCount:(long)count forIndex:(long)index;	// 0x36be964d
- (void)setAdvance:(CGSize)advance forIndex:(long)index;	// 0x36be95b1
- (void)setGlyphID:(unsigned short)anId forIndex:(long)index;	// 0x36be9561
- (void)setGlyphRange:(NSRange)range characterRange:(NSRange)range2;	// 0x36be5ae9
- (void)setProps:(unsigned)props forIndex:(long)index;	// 0x36be9621
- (void)setStringIndex:(long)index forIndex:(long)index2;	// 0x36be96a5
- (void)swapGlyph:(long)glyph withIndex:(long)index;	// 0x36be97f1
// converted property getter: - (id)typesetter;	// 0x36be5ad5
@end

