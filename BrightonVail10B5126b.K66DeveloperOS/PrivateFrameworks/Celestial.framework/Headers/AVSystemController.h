/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVSystemController : NSObject {
	AVSystemControllerPrivate *_priv;	// 4 = 0x4
}
+ (void)initialize;	// 0x335c2ca1
+ (id)sharedAVSystemController;	// 0x335c2ce1
- (id)init;	// 0x335c2d91
- (BOOL)allowUserToExceedEUVolumeLimit;	// 0x335ddf2d
- (id)attributeForKey:(id)key;	// 0x335cde59
- (BOOL)changeActiveCategoryVolumeBy:(float)by;	// 0x335dd96d
- (BOOL)changeActiveCategoryVolumeBy:(float)by fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x335dd90d
- (BOOL)changeActiveCategoryVolumeBy:(float)by forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x335dda9d
- (BOOL)changeVolumeBy:(float)by forCategory:(id)category;	// 0x335ddbe1
- (BOOL)currentRouteHasVolumeControl;	// 0x335ddea5
- (void)dealloc;	// 0x335cf771
- (BOOL)enablePortDiscovery:(BOOL)discovery;	// 0x335ddd75
- (BOOL)getActiveCategoryMuted:(BOOL *)muted;	// 0x335ddb69
- (BOOL)getActiveCategoryMuted:(BOOL *)muted forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x335ddba5
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name;	// 0x335dda79
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name fallbackCategory:(id)category;	// 0x335dda1d
- (BOOL)getActiveCategoryVolume:(float *)volume andName:(id *)name forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x335ddaed
- (BOOL)getPortDiscoveryEnabled;	// 0x335ddd01
- (BOOL)getVolume:(float *)volume forCategory:(id)category;	// 0x335ddddd
- (void)handleServerDied;	// 0x335cf6e1
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x335de48d
- (BOOL)okToNotifyFromThisThread;	// 0x335de541
- (id)pickableRoutesForCategory:(id)category;	// 0x335dde79
- (void)postEffectiveVolumeNotification:(void *)notification;	// 0x335de629
- (void)postFullMuteDidChangeNotification:(void *)postFullMute;	// 0x335de565
- (id)routeForCategory:(id)category;	// 0x335dde05
- (BOOL)setActiveCategoryVolumeTo:(float)to;	// 0x335dd9f5
- (BOOL)setActiveCategoryVolumeTo:(float)to fallbackCategory:(id)category resultVolume:(float *)volume affectedCategory:(id *)category4;	// 0x335dd995
- (BOOL)setActiveCategoryVolumeTo:(float)to forRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x335ddac5
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x335ddf7d
- (BOOL)setPickedRouteWithPassword:(id)password withPassword:(id)password2;	// 0x335ddc31
- (BOOL)setVolumeTo:(float)to forCategory:(id)category;	// 0x335ddc09
- (BOOL)toggleActiveCategoryMuted;	// 0x335ddb15
- (BOOL)toggleActiveCategoryMutedForRoute:(id)route andDeviceIdentifier:(id)identifier;	// 0x335ddb3d
- (id)volumeCategoryForAudioCategory:(id)audioCategory;	// 0x335dde4d
@end

