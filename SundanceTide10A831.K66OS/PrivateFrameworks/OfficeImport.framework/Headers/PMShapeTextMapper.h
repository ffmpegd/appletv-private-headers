/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADTextBody, OADOrientedBounds, CMStyle;

@interface PMShapeTextMapper : CMMapper {
	OADTextBody *mTextBody;	// 8 = 0x8
	OADOrientedBounds *mBounds;	// 12 = 0xc
	CMStyle *mStyle;	// 16 = 0x10
	BOOL mRectangular;	// 20 = 0x14
}
- (id)initWithOadTextBody:(id)oadTextBody bounds:(id)bounds parent:(id)parent;	// 0x36a44001
- (void)dealloc;	// 0x36a4608d
- (BOOL)isTableCellContent;	// 0x36a449ed
- (void)mapAt:(id)at withState:(id)state;	// 0x36a440a9
- (BOOL)setRectangular:(BOOL)rectangular;	// 0x36a44091
- (int)textAnchor;	// 0x36b5c375
@end

