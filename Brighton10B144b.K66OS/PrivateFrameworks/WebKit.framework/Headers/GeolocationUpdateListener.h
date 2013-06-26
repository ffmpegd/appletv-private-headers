/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */



@protocol GeolocationUpdateListener
- (void)errorOccurred:(id)occurred;
- (void)geolocationDelegateStarted;
- (void)geolocationDelegateUnableToStart;
- (void)positionChanged:(id)changed;
- (void)resetGeolocation;
@end
