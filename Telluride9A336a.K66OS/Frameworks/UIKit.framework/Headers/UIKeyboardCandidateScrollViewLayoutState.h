/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateScrollViewLayoutState : NSObject {
@private
	NSMutableArray *_allCells;	// 4 = 0x4
	NSMutableArray *_candidateCells;	// 8 = 0x8
	NSArray *_groupHeaderCells;	// 12 = 0xc
	NSArray *_candidateGroups;	// 16 = 0x10
	float _totalWidth;	// 20 = 0x14
	unsigned _columnCount;	// 24 = 0x18
	float _columnWidth;	// 28 = 0x1c
	float _rowHeight;	// 32 = 0x20
	BOOL _grouped;	// 36 = 0x24
	float _groupBarWidth;	// 40 = 0x28
	id _completion;	// 44 = 0x2c
	BOOL _layoutFinished;	// 48 = 0x30
	unsigned _currentGroupIndex;	// 52 = 0x34
	unsigned _currentCandidateIndex;	// 56 = 0x38
	unsigned _currentRowIndex;	// 60 = 0x3c
	CGPoint _startPosition;	// 64 = 0x40
	float _previousGroupMaxY;	// 72 = 0x48
	float _groupHeight;	// 76 = 0x4c
}
@property(retain, nonatomic) NSMutableArray *allCells;	// G=0x35457a8d; S=0x35457a9d; @synthesize=_allCells
@property(retain, nonatomic) NSMutableArray *candidateCells;	// G=0x35457ac1; S=0x35457ad1; @synthesize=_candidateCells
@property(retain, nonatomic) NSArray *candidateGroups;	// G=0x35457b29; S=0x35457b39; @synthesize=_candidateGroups
@property(assign, nonatomic) unsigned columnCount;	// G=0x35457b7d; S=0x35457b8d; @synthesize=_columnCount
@property(assign, nonatomic) float columnWidth;	// G=0x35457b9d; S=0x35457bad; @synthesize=_columnWidth
@property(copy, nonatomic) id completion;	// G=0x35457c1d; S=0x35457c2d; @synthesize=_completion
@property(assign, nonatomic) unsigned currentCandidateIndex;	// G=0x35457c91; S=0x35457ca1; @synthesize=_currentCandidateIndex
@property(assign, nonatomic) unsigned currentGroupIndex;	// G=0x35457c71; S=0x35457c81; @synthesize=_currentGroupIndex
@property(assign, nonatomic) unsigned currentRowIndex;	// G=0x35457cb1; S=0x35457cc1; @synthesize=_currentRowIndex
@property(assign, nonatomic) float groupBarWidth;	// G=0x35457bfd; S=0x35457c0d; @synthesize=_groupBarWidth
@property(retain, nonatomic) NSArray *groupHeaderCells;	// G=0x35457af5; S=0x35457b05; @synthesize=_groupHeaderCells
@property(assign, nonatomic) float groupHeight;	// G=0x35457d21; S=0x35457d31; @synthesize=_groupHeight
@property(assign, nonatomic) BOOL grouped;	// G=0x35457bdd; S=0x35457bed; @synthesize=_grouped
@property(assign, nonatomic) BOOL layoutFinished;	// G=0x35457c51; S=0x35457c61; @synthesize=_layoutFinished
@property(assign, nonatomic) float previousGroupMaxY;	// G=0x35457d01; S=0x35457d11; @synthesize=_previousGroupMaxY
@property(assign, nonatomic) float rowHeight;	// G=0x35457bbd; S=0x35457bcd; @synthesize=_rowHeight
@property(assign, nonatomic) CGPoint startPosition;	// G=0x35457cd1; S=0x35457ced; @synthesize=_startPosition
@property(assign, nonatomic) float totalWidth;	// G=0x35457b5d; S=0x35457b6d; @synthesize=_totalWidth
// declared property getter: - (id)allCells;	// 0x35457a8d
// declared property getter: - (id)candidateCells;	// 0x35457ac1
// declared property getter: - (id)candidateGroups;	// 0x35457b29
// declared property getter: - (unsigned)columnCount;	// 0x35457b7d
// declared property getter: - (float)columnWidth;	// 0x35457b9d
// declared property getter: - (id)completion;	// 0x35457c1d
// declared property getter: - (unsigned)currentCandidateIndex;	// 0x35457c91
// declared property getter: - (unsigned)currentGroupIndex;	// 0x35457c71
// declared property getter: - (unsigned)currentRowIndex;	// 0x35457cb1
- (void)dealloc;	// 0x354579f1
// declared property getter: - (float)groupBarWidth;	// 0x35457bfd
// declared property getter: - (id)groupHeaderCells;	// 0x35457af5
// declared property getter: - (float)groupHeight;	// 0x35457d21
// declared property getter: - (BOOL)grouped;	// 0x35457bdd
// declared property getter: - (BOOL)layoutFinished;	// 0x35457c51
// declared property getter: - (float)previousGroupMaxY;	// 0x35457d01
// declared property getter: - (float)rowHeight;	// 0x35457bbd
// declared property setter: - (void)setAllCells:(id)cells;	// 0x35457a9d
// declared property setter: - (void)setCandidateCells:(id)cells;	// 0x35457ad1
// declared property setter: - (void)setCandidateGroups:(id)groups;	// 0x35457b39
// declared property setter: - (void)setColumnCount:(unsigned)count;	// 0x35457b8d
// declared property setter: - (void)setColumnWidth:(float)width;	// 0x35457bad
// declared property setter: - (void)setCompletion:(id)completion;	// 0x35457c2d
// declared property setter: - (void)setCurrentCandidateIndex:(unsigned)index;	// 0x35457ca1
// declared property setter: - (void)setCurrentGroupIndex:(unsigned)index;	// 0x35457c81
// declared property setter: - (void)setCurrentRowIndex:(unsigned)index;	// 0x35457cc1
// declared property setter: - (void)setGroupBarWidth:(float)width;	// 0x35457c0d
// declared property setter: - (void)setGroupHeaderCells:(id)cells;	// 0x35457b05
// declared property setter: - (void)setGroupHeight:(float)height;	// 0x35457d31
// declared property setter: - (void)setGrouped:(BOOL)grouped;	// 0x35457bed
// declared property setter: - (void)setLayoutFinished:(BOOL)finished;	// 0x35457c61
// declared property setter: - (void)setPreviousGroupMaxY:(float)y;	// 0x35457d11
// declared property setter: - (void)setRowHeight:(float)height;	// 0x35457bcd
// declared property setter: - (void)setStartPosition:(CGPoint)position;	// 0x35457ced
// declared property setter: - (void)setTotalWidth:(float)width;	// 0x35457b6d
// declared property getter: - (CGPoint)startPosition;	// 0x35457cd1
// declared property getter: - (float)totalWidth;	// 0x35457b5d
@end

