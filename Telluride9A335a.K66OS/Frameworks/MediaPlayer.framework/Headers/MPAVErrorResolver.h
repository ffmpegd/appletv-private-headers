/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@protocol MPAVErrorResolverDelegate;

@interface MPAVErrorResolver : NSObject {
	id<MPAVErrorResolverDelegate> _delegate;	// 4 = 0x4
}
@property(assign, nonatomic) id<MPAVErrorResolverDelegate> delegate;	// G=0x3016b629; S=0x3016b639; @synthesize=_delegate
// declared property getter: - (id)delegate;	// 0x3016b629
- (void)resolveError:(id)error;	// 0x3016b591
- (void)sendDidResolveError:(id)send withResolution:(int)resolution;	// 0x3016b5a5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3016b639
@end

