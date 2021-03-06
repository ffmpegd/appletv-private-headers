/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import <NSObject.h> // Unknown library

@class CMDeviceMotion, CMGyroData, CMAccelerometerData, CMMagnetometerData;

@interface CMMotionManager : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isAccelerometerActive) BOOL accelerometerActive;	// G=0x36de80c9; @dynamic
@property(readonly, assign, nonatomic, getter=isAccelerometerAvailable) BOOL accelerometerAvailable;	// G=0x36de80b9; @dynamic
@property(readonly, assign) CMAccelerometerData *accelerometerData;	// G=0x36de81b1; @dynamic
@property(assign, nonatomic) double accelerometerUpdateInterval;	// G=0x36de8189; S=0x36de80ed; @dynamic
@property(readonly, assign, nonatomic) int attitudeReferenceFrame;	// G=0x36de8cfd; @dynamic
@property(readonly, assign) CMDeviceMotion *deviceMotion;	// G=0x36de8d1d; @dynamic
@property(readonly, assign, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;	// G=0x36de8c15; @dynamic
@property(readonly, assign, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable;	// G=0x36de8bed; @dynamic
@property(assign, nonatomic) double deviceMotionUpdateInterval;	// G=0x36de8cd5; S=0x36de8c39; @dynamic
@property(readonly, assign, nonatomic, getter=isGyroActive) BOOL gyroActive;	// G=0x36de8665; @dynamic
@property(readonly, assign, nonatomic, getter=isGyroAvailable) BOOL gyroAvailable;	// G=0x36de8655; @dynamic
@property(readonly, assign) CMGyroData *gyroData;	// G=0x36de874d; @dynamic
@property(assign, nonatomic) double gyroUpdateInterval;	// G=0x36de8725; S=0x36de8689; @dynamic
@property(readonly, assign, nonatomic, getter=isMagnetometerActive) BOOL magnetometerActive;	// G=0x36de9589; 
@property(readonly, assign, nonatomic, getter=isMagnetometerAvailable) BOOL magnetometerAvailable;	// G=0x36de9579; 
@property(readonly, assign) CMMagnetometerData *magnetometerData;	// G=0x36de9671; 
@property(assign, nonatomic) double magnetometerUpdateInterval;	// G=0x36de9649; S=0x36de95ad; 
@property(assign, nonatomic) BOOL showsDeviceMovementDisplay;	// G=0x36de9b99; S=0x36de9b15; 
@property(assign) BOOL useAccelerometer;	// G=0x36de7799; S=0x36de7771; converted property
+ (unsigned)availableAttitudeReferenceFrames;	// 0x36de786d
+ (void)dummySelector:(id)selector;	// 0x36deb481
+ (void)initialize;	// 0x36de77bd
+ (void)setAllowInBackground:(BOOL)background;	// 0x36de788d
- (id)init;	// 0x36de7891
- (id)initPrivate;	// 0x36de7a21
- (id)initUsing6AxisSensorFusion;	// 0x36de9c89
- (id)initUsingGyroOnlySensorFusion;	// 0x36de9cd9
// declared property getter: - (id)accelerometerData;	// 0x36de81b1
// declared property getter: - (double)accelerometerUpdateInterval;	// 0x36de8189
// declared property getter: - (int)attitudeReferenceFrame;	// 0x36de8cfd
- (void)dealloc;	// 0x36de7d8d
- (void)deallocPrivate;	// 0x36de7ef9
// declared property getter: - (id)deviceMotion;	// 0x36de8d1d
// declared property getter: - (double)deviceMotionUpdateInterval;	// 0x36de8cd5
- (void)didBecomeActive:(id)active;	// 0x36deb329
- (void)didBecomeActivePrivate:(id)aPrivate;	// 0x36deb439
- (void)dismissDeviceMovementDisplay;	// 0x36de9c49
// declared property getter: - (id)gyroData;	// 0x36de874d
// declared property getter: - (double)gyroUpdateInterval;	// 0x36de8725
// declared property getter: - (BOOL)isAccelerometerActive;	// 0x36de80c9
// declared property getter: - (BOOL)isAccelerometerAvailable;	// 0x36de80b9
// declared property getter: - (BOOL)isDeviceMotionActive;	// 0x36de8c15
// declared property getter: - (BOOL)isDeviceMotionAvailable;	// 0x36de8bed
// declared property getter: - (BOOL)isGyroActive;	// 0x36de8665
// declared property getter: - (BOOL)isGyroAvailable;	// 0x36de8655
// declared property getter: - (BOOL)isMagnetometerActive;	// 0x36de9589
// declared property getter: - (BOOL)isMagnetometerAvailable;	// 0x36de9579
// declared property getter: - (id)magnetometerData;	// 0x36de9671
// declared property getter: - (double)magnetometerUpdateInterval;	// 0x36de9649
- (void)onAccelerometer:(const Sample *)accelerometer;	// 0x36dea409
- (void)onDeviceMotion:(const Sample *)motion;	// 0x36deaab9
- (void)onGeomagneticModel:(const XXStruct_01mbIB *)model;	// 0x36deb201
- (void)onGyro:(const Sample *)gyro;	// 0x36dea641
- (void)onMagnetometer:(const Sample *)magnetometer;	// 0x36dea881
- (void)setAccelerometerDataCallback:(/*function-pointer*/ void *)callback info:(void *)info interval:(double)interval;	// 0x36de9d25
// declared property setter: - (void)setAccelerometerUpdateInterval:(double)interval;	// 0x36de80ed
- (void)setAccelerometerUpdateIntervalPrivate:(double)aPrivate;	// 0x36de8429
- (void)setDeviceMotionCallback:(/*function-pointer*/ void *)callback info:(void *)info interval:(double)interval fsync:(BOOL)fsync;	// 0x36dea15d
// declared property setter: - (void)setDeviceMotionUpdateInterval:(double)interval;	// 0x36de8c39
- (void)setDeviceMotionUpdateIntervalPrivate:(double)aPrivate;	// 0x36de91d1
- (void)setGyroDataCallback:(/*function-pointer*/ void *)callback info:(void *)info interval:(double)interval;	// 0x36de9f41
// declared property setter: - (void)setGyroUpdateInterval:(double)interval;	// 0x36de8689
- (void)setGyroUpdateIntervalPrivate:(double)aPrivate;	// 0x36de89c1
// declared property setter: - (void)setMagnetometerUpdateInterval:(double)interval;	// 0x36de95ad
- (void)setMagnetometerUpdateIntervalPrivate:(double)aPrivate;	// 0x36de98e9
// declared property setter: - (void)setShowsDeviceMovementDisplay:(BOOL)display;	// 0x36de9b15
- (void)setShowsDeviceMovementDisplayPrivate:(BOOL)aPrivate;	// 0x36de9bbd
// converted property setter: - (void)setUseAccelerometer:(BOOL)accelerometer;	// 0x36de7771
- (void)showDeviceMovementDisplay;	// 0x36de9bf5
// declared property getter: - (BOOL)showsDeviceMovementDisplay;	// 0x36de9b99
- (void)startAccelerometerUpdates;	// 0x36de8261
- (void)startAccelerometerUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;	// 0x36de8491
- (void)startAccelerometerUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x36de82dd
- (void)startDeviceMotionUpdates;	// 0x36de8e55
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(int)frame toQueue:(id)queue withHandler:(id)handler;	// 0x36de9239
- (void)startDeviceMotionUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x36de8ef1
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)frame;	// 0x36de8fe1
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)frame toQueue:(id)queue withHandler:(id)handler;	// 0x36de9071
- (void)startGyroUpdates;	// 0x36de87fd
- (void)startGyroUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;	// 0x36de8a29
- (void)startGyroUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x36de8879
- (void)startMagnetometerUpdates;	// 0x36de9721
- (void)startMagnetometerUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;	// 0x36de9951
- (void)startMagnetometerUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x36de979d
- (void)stopAccelerometerUpdates;	// 0x36de83ad
- (void)stopAccelerometerUpdatesPrivate;	// 0x36de85a9
- (void)stopDeviceMotionUpdates;	// 0x36de9155
- (void)stopDeviceMotionUpdatesPrivate;	// 0x36de948d
- (void)stopGyroUpdates;	// 0x36de8949
- (void)stopGyroUpdatesPrivate;	// 0x36de8b41
- (void)stopMagnetometerUpdates;	// 0x36de986d
- (void)stopMagnetometerUpdatesPrivate;	// 0x36de9a69
// converted property getter: - (BOOL)useAccelerometer;	// 0x36de7799
- (void)willResignActive:(id)active;	// 0x36deb27d
- (void)willResignActivePrivate:(id)aPrivate;	// 0x36deb3d5
@end

