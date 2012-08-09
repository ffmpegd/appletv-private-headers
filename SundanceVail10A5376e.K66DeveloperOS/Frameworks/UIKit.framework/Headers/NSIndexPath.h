/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSIndexPath.h> // Unknown library


@interface NSIndexPath (UITableView)
@property(readonly, assign, nonatomic) int row;	// G=0x3024df59; 
@property(readonly, assign, nonatomic) int section;	// G=0x30243c59; 
+ (id)indexPathForRow:(int)row inSection:(int)section;	// 0x30243c09
// declared property getter: - (int)row;	// 0x3024df59
// declared property getter: - (int)section;	// 0x30243c59
@end

@interface NSIndexPath (UICollectionViewAdditions)
@property(readonly, assign, nonatomic) int item;	// G=0x30630581; 
+ (id)indexPathForItem:(int)item inSection:(int)section;	// 0x30630571
// declared property getter: - (int)item;	// 0x30630581
@end
