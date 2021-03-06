/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <NSObject.h> // Unknown library
#import "CoreLocation-Structs.h"

@class NSString, CLHeading, NSSet, CLLocation;
@protocol CLLocationManagerDelegate;

@interface CLLocationManager : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double bestAccuracy;	// G=0x31a3814d; 
@property(assign, nonatomic) id<CLLocationManagerDelegate> delegate;	// G=0x31a345d9; S=0x31a345bd; 
@property(assign, nonatomic) double desiredAccuracy;	// G=0x31a34619; S=0x31a3858d; 
@property(assign, nonatomic) double distanceFilter;	// G=0x31a345f5; S=0x31a38685; 
@property(readonly, assign, nonatomic) double expectedGpsUpdateInterval;	// G=0x31a38301; 
@property(readonly, assign, nonatomic) CLHeading *heading;	// G=0x31a37835; 
@property(readonly, assign, nonatomic) BOOL headingAvailable;	// G=0x31a37c5d; 
@property(assign, nonatomic) double headingFilter;	// G=0x31a34659; S=0x31a37b19; 
@property(assign, nonatomic) int headingOrientation;	// G=0x31a3467d; S=0x31a37a21; 
@property(readonly, assign, nonatomic) CLClientRef internalClient;	// G=0x31a3463d; 
@property(readonly, assign, nonatomic) CLLocation *location;	// G=0x31a38391; 
@property(readonly, assign, nonatomic) BOOL locationServicesApproved;	// G=0x31a38325; 
@property(readonly, assign, nonatomic) BOOL locationServicesAvailable;	// G=0x31a3836d; 
@property(readonly, assign, nonatomic) BOOL locationServicesEnabled;	// G=0x31a3834d; 
@property(readonly, assign, nonatomic) double maximumRegionMonitoringDistance;	// G=0x31a3713d; 
@property(readonly, assign, nonatomic) NSSet *monitoredRegions;	// G=0x31a36d4d; 
@property(assign, nonatomic) BOOL privateMode;	// G=0x31a38125; S=0x31a38139; 
@property(copy, nonatomic) NSString *purpose;	// G=0x31a37f81; S=0x31a38051; 
@property(assign, nonatomic) BOOL supportInfo;	// G=0x31a3819d; S=0x31a381c9; 
+ (int)_authorizationStatus;	// 0x31a34895
+ (int)authorizationStatus;	// 0x31a34881
+ (BOOL)headingAvailable;	// 0x31a348fd
+ (BOOL)locationServicesEnabled;	// 0x31a34921
+ (BOOL)locationServicesEnabled:(BOOL)enabled;	// 0x31a34941
+ (BOOL)regionMonitoringAvailable;	// 0x31a348dd
+ (BOOL)regionMonitoringEnabled;	// 0x31a348cd
+ (void)setLocationServicesEnabled:(BOOL)enabled;	// 0x31a3490d
+ (id)sharedManager;	// 0x31a34961
+ (BOOL)significantLocationChangeMonitoringAvailable;	// 0x31a348ed
- (id)init;	// 0x31a34815
- (id)appsUsingLocation;	// 0x31a346a9
- (id)appsUsingLocationWithDetails;	// 0x31a36b1d
- (void)authorizeAppWithBundleId:(id)bundleId;	// 0x31a36c99
// declared property getter: - (double)bestAccuracy;	// 0x31a3814d
- (void)dealloc;	// 0x31a3877d
- (void)deauthorizeAppWithBundleId:(id)bundleId;	// 0x31a36be1
// declared property getter: - (id)delegate;	// 0x31a345d9
// declared property getter: - (double)desiredAccuracy;	// 0x31a34619
- (void)dismissHeadingCalibrationDisplay;	// 0x31a37579
// declared property getter: - (double)distanceFilter;	// 0x31a345f5
// declared property getter: - (double)expectedGpsUpdateInterval;	// 0x31a38301
// declared property getter: - (id)heading;	// 0x31a37835
// declared property getter: - (BOOL)headingAvailable;	// 0x31a37c5d
// declared property getter: - (double)headingFilter;	// 0x31a34659
// declared property getter: - (int)headingOrientation;	// 0x31a3467d
- (void)historicLocationsFromDate:(id)date forInterval:(double)interval;	// 0x31a37c81
// declared property getter: - (CLClientRef)internalClient;	// 0x31a3463d
// declared property getter: - (id)location;	// 0x31a38391
// declared property getter: - (BOOL)locationServicesApproved;	// 0x31a38325
// declared property getter: - (BOOL)locationServicesAvailable;	// 0x31a3836d
// declared property getter: - (BOOL)locationServicesEnabled;	// 0x31a3834d
// declared property getter: - (double)maximumRegionMonitoringDistance;	// 0x31a3713d
// declared property getter: - (id)monitoredRegions;	// 0x31a36d4d
- (void)onClientEvent:(int)event supportInfo:(id)info;	// 0x31a36a4d
- (void)onClientEventAuthStatus:(id)status;	// 0x31a368a5
- (void)onClientEventError:(id)error;	// 0x31a357d9
- (void)onClientEventHeading:(id)heading;	// 0x31a36121
- (void)onClientEventHeadingCalibration:(id)calibration;	// 0x31a35edd
- (void)onClientEventHistoricLocation:(id)location;	// 0x31a35c3d
- (void)onClientEventLocation:(id)location;	// 0x31a3645d
- (void)onClientEventLocationUnavailable:(id)unavailable;	// 0x31a363cd
- (void)onClientEventRegion:(id)region;	// 0x31a350b9
- (void)onClientEventRegionError:(id)error;	// 0x31a349a9
- (void)onClientEventRegistered:(id)registered;	// 0x31a35945
// declared property getter: - (BOOL)privateMode;	// 0x31a38125
// declared property getter: - (id)purpose;	// 0x31a37f81
- (void)resetApps;	// 0x31a36b35
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31a345bd
// declared property setter: - (void)setDesiredAccuracy:(double)accuracy;	// 0x31a3858d
// declared property setter: - (void)setDistanceFilter:(double)filter;	// 0x31a38685
// declared property setter: - (void)setHeadingFilter:(double)filter;	// 0x31a37b19
// declared property setter: - (void)setHeadingOrientation:(int)orientation;	// 0x31a37a21
// declared property setter: - (void)setPrivateMode:(BOOL)mode;	// 0x31a38139
// declared property setter: - (void)setPurpose:(id)purpose;	// 0x31a38051
// declared property setter: - (void)setSupportInfo:(BOOL)info;	// 0x31a381c9
- (void)startAppStatusUpdates;	// 0x31a34699
- (void)startMonitoringForRegion:(id)region desiredAccuracy:(double)accuracy;	// 0x31a372ed
- (void)startMonitoringSignificantLocationChanges;	// 0x31a374ad
- (void)startTechStatusUpdates;	// 0x31a346a1
- (void)startUpdatingHeading;	// 0x31a37721
- (void)startUpdatingLocation;	// 0x31a37e69
- (void)stopAppStatusUpdates;	// 0x31a3469d
- (void)stopMonitoringForRegion:(id)region;	// 0x31a37209
- (void)stopMonitoringSignificantLocationChanges;	// 0x31a373e1
- (void)stopTechStatusUpdates;	// 0x31a346a5
- (void)stopUpdatingHeading;	// 0x31a37649
- (void)stopUpdatingLocation;	// 0x31a37d91
// declared property getter: - (BOOL)supportInfo;	// 0x31a3819d
- (id)technologiesInUse;	// 0x31a36ae5
@end

