/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSArray, NSString, EAAccessoryInternal;
@protocol EAAccessoryDelegate;

@interface EAAccessory : NSObject {
@private
	EAAccessoryInternal *_internal;	// 4 = 0x4
}
@property(assign) CFAccessoryRef cfAccessory;	// G=0x31a4da4d; S=0x31a4da6d; converted property
@property(assign) /*function-pointer*/ void *cfAccessoryPortPropertyCallback;	// G=0x31a4da8d; S=0x31a4daad; converted property
@property(assign) void *cfAccessoryPortPropertyContext;	// G=0x31a4dacd; S=0x31a4daed; converted property
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x31a4d3a1; 
@property(readonly, assign, nonatomic) unsigned connectionID;	// G=0x31a4d3c5; 
@property(assign, nonatomic) id<EAAccessoryDelegate> delegate;	// G=0x31a4d601; S=0x31a4d4a5; 
@property(assign) unsigned eqIndex;	// G=0x31a4dd1d; S=0x31a4dcd5; converted property
@property(retain) id eqNames;	// G=0x31a4dcb5; S=0x31a4dc95; converted property
@property(readonly, assign, nonatomic) NSString *firmwareRevision;	// G=0x31a4d465; 
@property(readonly, assign, nonatomic) NSString *hardwareRevision;	// G=0x31a4d485; 
@property(assign) int iPodOutOptionsMask;	// G=0x31a4e0a1; S=0x31a4e0c1; converted property
@property(readonly, assign, nonatomic) NSString *manufacturer;	// G=0x31a4d3e5; 
@property(readonly, assign, nonatomic) NSString *modelNumber;	// G=0x31a4d425; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31a4d405; 
@property(readonly, assign, nonatomic) NSArray *protocolStrings;	// G=0x31a4d4c5; 
@property(readonly, assign, nonatomic) NSString *serialNumber;	// G=0x31a4d445; 
- (id)init;	// 0x31a4d1b5
- (void)_addSession:(id)session;	// 0x31a4d851
- (void)_endSession:(unsigned)session;	// 0x31a4d965
- (id)_initWithAccessory:(id)accessory;	// 0x31a4d621
- (void)_openCompleteForSession:(unsigned)session;	// 0x31a4d891
- (id)_protocolIDForProtocolString:(id)protocolString;	// 0x31a4d815
- (void)_removeSession:(id)session;	// 0x31a4d871
- (void)_setConnected:(BOOL)connected;	// 0x31a4d7f5
- (id)_shortDescription;	// 0x31a4d7c9
- (void)_updateAccessoryInfo:(id)info;	// 0x31a4d675
- (BOOL)accessoryHasNMEASentencesAvailable;	// 0x31a4dd65
- (id)allPublicProtocolStrings;	// 0x31a4db95
- (id)audioPorts;	// 0x31a4db75
// converted property getter: - (CFAccessoryRef)cfAccessory;	// 0x31a4da4d
// converted property getter: - (/*function-pointer*/ void *)cfAccessoryPortPropertyCallback;	// 0x31a4da8d
// converted property getter: - (void *)cfAccessoryPortPropertyContext;	// 0x31a4dacd
- (int)classType;	// 0x31a4db55
// declared property getter: - (unsigned)connectionID;	// 0x31a4d3c5
- (void)dealloc;	// 0x31a4d1ed
// declared property getter: - (id)delegate;	// 0x31a4d601
- (id)description;	// 0x31a4d239
// converted property getter: - (unsigned)eqIndex;	// 0x31a4dd1d
// converted property getter: - (id)eqNames;	// 0x31a4dcb5
// declared property getter: - (id)firmwareRevision;	// 0x31a4d465
- (BOOL)getEphemerisExpirationInterval:(double *)interval;	// 0x31a4dec9
- (BOOL)getEphemerisRecommendRefreshInterval:(double *)interval;	// 0x31a4de6d
- (BOOL)getEphemerisURL:(id *)url;	// 0x31a4de21
- (BOOL)getNMEASentence:(id *)sentence;	// 0x31a4dd9d
// declared property getter: - (id)hardwareRevision;	// 0x31a4d485
// converted property getter: - (int)iPodOutOptionsMask;	// 0x31a4e0a1
// declared property getter: - (BOOL)isConnected;	// 0x31a4d3a1
// declared property getter: - (id)manufacturer;	// 0x31a4d3e5
// declared property getter: - (id)modelNumber;	// 0x31a4d425
// declared property getter: - (id)name;	// 0x31a4d405
- (id)preferredApp;	// 0x31a4db35
// declared property getter: - (id)protocolStrings;	// 0x31a4d4c5
- (BOOL)sendEphemeris:(id)ephemeris;	// 0x31a4dfa9
- (BOOL)sendEphemerisPointDataGpsWeek:(unsigned)week gpsTOW:(double)tow latitude:(double)latitude longitude:(double)longitude accuracy:(unsigned short)accuracy;	// 0x31a4df59
- (BOOL)sendGpsWeek:(unsigned)week gpsTOW:(double)tow;	// 0x31a4df25
// declared property getter: - (id)serialNumber;	// 0x31a4d445
// converted property setter: - (void)setCfAccessory:(CFAccessoryRef)accessory;	// 0x31a4da6d
// converted property setter: - (void)setCfAccessoryPortPropertyCallback:(/*function-pointer*/ void *)callback;	// 0x31a4daad
// converted property setter: - (void)setCfAccessoryPortPropertyContext:(void *)context;	// 0x31a4daed
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31a4d4a5
// converted property setter: - (void)setEqIndex:(unsigned)index;	// 0x31a4dcd5
// converted property setter: - (void)setEqNames:(id)names;	// 0x31a4dc95
// converted property setter: - (void)setIPodOutOptionsMask:(int)mask;	// 0x31a4e0c1
- (BOOL)setNMEASentencesToFilter:(id)filter;	// 0x31a4dde9
- (BOOL)supportsAccessibility;	// 0x31a4dfd9
- (BOOL)supportsLocation;	// 0x31a4dd3d
- (BOOL)supportsPublicIap;	// 0x31a4db0d
- (void)updateSystemProperty:(int)property withValue:(id)value;	// 0x31a4e001
@end

