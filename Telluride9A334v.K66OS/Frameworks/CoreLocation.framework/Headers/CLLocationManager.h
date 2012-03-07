/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSSet, CLHeading, NSString, CLLocation;
@protocol CLLocationManagerDelegate;

@interface CLLocationManager : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) double bestAccuracy;	// G=0x31bebb9d; 
@property(assign, nonatomic) id<CLLocationManagerDelegate> delegate;	// G=0x31beb5bd; S=0x31beb59d; 
@property(assign, nonatomic) double desiredAccuracy;	// G=0x31beb7bd; S=0x31beb6e1; 
@property(assign, nonatomic) double distanceFilter;	// G=0x31beb6b9; S=0x31beb5dd; 
@property(readonly, assign, nonatomic) double expectedGpsUpdateInterval;	// G=0x31beba65; 
@property(readonly, assign, nonatomic) CLHeading *heading;	// G=0x31bec1e5; 
@property(readonly, assign, nonatomic) BOOL headingAvailable;	// G=0x31bebf85; 
@property(assign, nonatomic) double headingFilter;	// G=0x31bec0c5; S=0x31bebfad; 
@property(assign, nonatomic) int headingOrientation;	// G=0x31bec1c5; S=0x31bec0ed; 
@property(readonly, assign, nonatomic) CLClientRef internalClient;	// G=0x31bebbf5; 
@property(readonly, assign, nonatomic) CLLocation *location;	// G=0x31beb7e5; 
@property(readonly, assign, nonatomic) BOOL locationServicesApproved;	// G=0x31beba39; 
@property(readonly, assign, nonatomic) BOOL locationServicesAvailable;	// G=0x31beb9e9; 
@property(readonly, assign, nonatomic) BOOL locationServicesEnabled;	// G=0x31beba11; 
@property(assign, nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;	// G=0x31bf006d; S=0x31bf008d; 
@property(readonly, assign, nonatomic) double maximumRegionMonitoringDistance;	// G=0x31bec941; 
@property(readonly, assign, nonatomic) NSSet *monitoredRegions;	// G=0x31beca15; 
@property(assign, nonatomic, getter=isPersistentMonitoringEnabled) BOOL persistentMonitoringEnabled;	// G=0x31bf000d; S=0x31bf002d; 
@property(assign, nonatomic) BOOL privateMode;	// G=0x31bebc25; S=0x31bebc15; 
@property(copy, nonatomic) NSString *purpose;	// G=0x31bebcf1; S=0x31bebc39; 
@property(assign, nonatomic) BOOL supportInfo;	// G=0x31bebb99; S=0x31beba85; 
+ (int)_authorizationStatus;	// 0x31beff7d
+ (int)_authorizationStatusForBundleIdentifier:(id)bundleIdentifier bundle:(id)bundle;	// 0x31beff1d
+ (int)authorizationStatus;	// 0x31beff91
+ (int)authorizationStatusForBundle:(id)bundle;	// 0x31beff69
+ (int)authorizationStatusForBundleIdentifier:(id)bundleIdentifier;	// 0x31beff55
+ (id)dateLocationLastUsedForLocationDictionary:(id)locationDictionary;	// 0x31c1dd51
+ (unsigned)entityClassesForLocationDictionary:(id)locationDictionary;	// 0x31c1dd21
+ (BOOL)headingAvailable;	// 0x31beb55d
+ (BOOL)isEntityAuthorizedForLocationDictionary:(id)locationDictionary;	// 0x31c1dd59
+ (BOOL)isLocationActiveForLocationDictionary:(id)locationDictionary;	// 0x31c1dd45
+ (BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned)locationEntityClass;	// 0x31c1dc71
+ (BOOL)locationServicesEnabled;	// 0x31beb525
+ (BOOL)locationServicesEnabled:(BOOL)enabled;	// 0x31beb535
+ (unsigned)primaryEntityClassForLocationDictionary:(id)locationDictionary;	// 0x31c1dced
+ (BOOL)regionMonitoringAvailable;	// 0x31beb57d
+ (BOOL)regionMonitoringEnabled;	// 0x31beb58d
+ (void)setAuthorizationStatus:(BOOL)status forBundle:(id)bundle;	// 0x31beffb5
+ (void)setAuthorizationStatus:(BOOL)status forBundleIdentifier:(id)bundleIdentifier;	// 0x31beffa1
+ (void)setDefaultEffectiveBundle:(id)bundle;	// 0x31beffed
+ (void)setDefaultEffectiveBundleIdentifier:(id)identifier;	// 0x31beffe5
+ (void)setEntityAuthorized:(BOOL)authorized forLocationDictionary:(id)locationDictionary;	// 0x31c1ddad
+ (void)setLocationServicesEnabled:(BOOL)enabled;	// 0x31beb54d
+ (void)setStatusBarIconEnabled:(BOOL)enabled forLocationEntityClass:(unsigned)locationEntityClass;	// 0x31c1dc05
+ (id)sharedManager;	// 0x31beb4dd
+ (BOOL)significantLocationChangeMonitoringAvailable;	// 0x31beb56d
- (id)init;	// 0x31beb455
- (id)initWithEffectiveBundle:(id)effectiveBundle;	// 0x31beb47d
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier;	// 0x31beb469
- (id)initWithEffectiveBundleIdentifier:(id)effectiveBundleIdentifier bundle:(id)bundle;	// 0x31beb3dd
- (id)appsUsingLocation;	// 0x31bece5d
- (id)appsUsingLocationWithDetails;	// 0x31bece61
// declared property getter: - (double)bestAccuracy;	// 0x31bebb9d
- (void)dealloc;	// 0x31beb491
// declared property getter: - (id)delegate;	// 0x31beb5bd
// declared property getter: - (double)desiredAccuracy;	// 0x31beb7bd
- (void)dismissHeadingCalibrationDisplay;	// 0x31bec545
// declared property getter: - (double)distanceFilter;	// 0x31beb6b9
// declared property getter: - (double)expectedGpsUpdateInterval;	// 0x31beba65
// declared property getter: - (id)heading;	// 0x31bec1e5
// declared property getter: - (BOOL)headingAvailable;	// 0x31bebf85
// declared property getter: - (double)headingFilter;	// 0x31bec0c5
// declared property getter: - (int)headingOrientation;	// 0x31bec1c5
- (void)historicLocationsFromDate:(id)date forInterval:(double)interval;	// 0x31bebf6d
// declared property getter: - (CLClientRef)internalClient;	// 0x31bebbf5
// declared property getter: - (BOOL)isLocationServicesPreferencesDialogEnabled;	// 0x31bf006d
// declared property getter: - (BOOL)isPersistentMonitoringEnabled;	// 0x31bf000d
// declared property getter: - (id)location;	// 0x31beb7e5
// declared property getter: - (BOOL)locationServicesApproved;	// 0x31beba39
// declared property getter: - (BOOL)locationServicesAvailable;	// 0x31beb9e9
// declared property getter: - (BOOL)locationServicesEnabled;	// 0x31beba11
// declared property getter: - (double)maximumRegionMonitoringDistance;	// 0x31bec941
// declared property getter: - (id)monitoredRegions;	// 0x31beca15
- (void)onClientEvent:(int)event supportInfo:(id)info;	// 0x31beceb9
- (void)onClientEventAuthStatus:(id)status;	// 0x31becf85
- (void)onClientEventError:(id)error;	// 0x31bedbb9
- (void)onClientEventHeading:(id)heading;	// 0x31bed719
- (void)onClientEventHeadingCalibration:(id)calibration;	// 0x31bed9c9
- (void)onClientEventHistoricLocation:(id)location;	// 0x31bedbb5
- (void)onClientEventLocation:(id)location;	// 0x31bed14d
- (void)onClientEventLocationUnavailable:(id)unavailable;	// 0x31bed67d
- (void)onClientEventRegion:(id)region;	// 0x31bedd0d
- (void)onClientEventRegionError:(id)error;	// 0x31bee53d
- (void)onClientEventRegionResponseDelayed:(id)delayed;	// 0x31beec1d
- (void)onClientEventRegionSetupCompleted:(id)completed;	// 0x31bef895
// declared property getter: - (BOOL)privateMode;	// 0x31bebc25
// declared property getter: - (id)purpose;	// 0x31bebcf1
- (void)registerAsLocationClient;	// 0x31bf00cd
- (void)resetApps;	// 0x31becdcd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31beb59d
// declared property setter: - (void)setDesiredAccuracy:(double)accuracy;	// 0x31beb6e1
// declared property setter: - (void)setDistanceFilter:(double)filter;	// 0x31beb5dd
// declared property setter: - (void)setHeadingFilter:(double)filter;	// 0x31bebfad
// declared property setter: - (void)setHeadingOrientation:(int)orientation;	// 0x31bec0ed
// declared property setter: - (void)setLocationServicesPreferencesDialogEnabled:(BOOL)enabled;	// 0x31bf008d
// declared property setter: - (void)setPersistentMonitoringEnabled:(BOOL)enabled;	// 0x31bf002d
// declared property setter: - (void)setPrivateMode:(BOOL)mode;	// 0x31bebc15
// declared property setter: - (void)setPurpose:(id)purpose;	// 0x31bebc39
// declared property setter: - (void)setSupportInfo:(BOOL)info;	// 0x31beba85
- (void)startAppStatusUpdates;	// 0x31bec5f9
- (void)startMonitoringForRegion:(id)region;	// 0x31bec781
- (void)startMonitoringForRegion:(id)region desiredAccuracy:(double)accuracy;	// 0x31bec771
- (void)startMonitoringSignificantLocationChanges;	// 0x31bec609
- (void)startTechStatusUpdates;	// 0x31bec601
- (void)startUpdatingHeading;	// 0x31bec38d
- (void)startUpdatingLocation;	// 0x31bebda9
- (void)stopAppStatusUpdates;	// 0x31bec5fd
- (void)stopMonitoringForRegion:(id)region;	// 0x31bec865
- (void)stopMonitoringSignificantLocationChanges;	// 0x31bec6bd
- (void)stopTechStatusUpdates;	// 0x31bec605
- (void)stopUpdatingHeading;	// 0x31bec485
- (void)stopUpdatingLocation;	// 0x31bebead
// declared property getter: - (BOOL)supportInfo;	// 0x31bebb99
- (id)technologiesInUse;	// 0x31bece7d
@end

