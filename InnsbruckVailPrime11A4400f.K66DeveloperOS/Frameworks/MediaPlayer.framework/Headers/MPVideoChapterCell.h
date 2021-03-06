/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UITableViewCell.h>

@class MPTimeMarker, MPVideoChapterCellContentView, MPImageCache;

@interface MPVideoChapterCell : UITableViewCell {
	MPVideoChapterCellContentView *_chapterContentView;	// 360 = 0x168
}
@property(retain, nonatomic) MPImageCache *artworkImageCache;	// G=0x2e28e815; S=0x2e28e7f5; 
@property(assign, nonatomic, getter=isCurrent) BOOL current;	// G=0x2e28e6cd; S=0x2e28e6f1; 
@property(assign, nonatomic) unsigned index;	// G=0x2e28e6ad; S=0x2e28e711; 
@property(assign, nonatomic) BOOL showThumbnailColumn;	// G=0x2e28e791; S=0x2e28e731; 
@property(assign, nonatomic) float timeColumnWidth;	// G=0x2e28e7b5; S=0x2e28e751; 
@property(retain, nonatomic) MPTimeMarker *timeMarker;	// G=0x2e28e7d5; S=0x2e28e771; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x2e28e4b9
- (void).cxx_destruct;	// 0x2e28e895
// declared property getter: - (id)artworkImageCache;	// 0x2e28e815
- (void)dealloc;	// 0x2e28e615
// declared property getter: - (unsigned)index;	// 0x2e28e6ad
// declared property getter: - (BOOL)isCurrent;	// 0x2e28e6cd
- (void)prepareForReuse;	// 0x2e28e871
// declared property setter: - (void)setArtworkImageCache:(id)cache;	// 0x2e28e7f5
- (void)setArtworkImageRequest:(id)request artworkLoadCompletionHandler:(id)handler;	// 0x2e28e835
// declared property setter: - (void)setCurrent:(BOOL)current;	// 0x2e28e6f1
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x2e28e711
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x2e28e659
// declared property setter: - (void)setShowThumbnailColumn:(BOOL)column;	// 0x2e28e731
// declared property setter: - (void)setTimeColumnWidth:(float)width;	// 0x2e28e751
// declared property setter: - (void)setTimeMarker:(id)marker;	// 0x2e28e771
// declared property getter: - (BOOL)showThumbnailColumn;	// 0x2e28e791
// declared property getter: - (float)timeColumnWidth;	// 0x2e28e7b5
// declared property getter: - (id)timeMarker;	// 0x2e28e7d5
@end

