/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIGestureRecognizer.h> // Unknown library


@interface MPActivityGestureRecognizer : UIGestureRecognizer {
}
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x31d9de61
- (void)_reportOngoingActivity;	// 0x31d9e059
- (void)_stopReportingOngoingActivity;	// 0x31d9e0a5
- (void)_touchesTerminated:(id)terminated withEvent:(id)event;	// 0x31d9df41
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31d9debd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x31d9df11
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31d9df01
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x31d9deed
@end

