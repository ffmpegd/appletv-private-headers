/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject {
	MPMediaEntity *_entity;	// 4 = 0x4
	NSString *_anchor;	// 8 = 0x8
	int _deletionType;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *anchor;	// G=0x31d14e31; @synthesize=_anchor
@property(readonly, assign, nonatomic) int deletionType;	// G=0x31d14e45; @synthesize=_deletionType
@property(readonly, assign, nonatomic) MPMediaEntity *entity;	// G=0x31d14e21; @synthesize=_entity
- (id)initWithEntity:(id)entity anchor:(id)anchor deletionType:(int)type;	// 0x31d14d29
// declared property getter: - (id)anchor;	// 0x31d14e31
- (void)dealloc;	// 0x31d14dbd
// declared property getter: - (int)deletionType;	// 0x31d14e45
// declared property getter: - (id)entity;	// 0x31d14e21
@end

