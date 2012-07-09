/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

#import "EAAccessoryDelegate.h"
#import "NSStreamDelegate.h"
#import <MobileAssetUpdater.h> // Unknown library

@class EAAccessory, NSString, EASession, NSURL, NSMutableData, NSObject, iAUPServer;
@protocol OS_dispatch_queue;

@interface EAFirmwareUpdater : MobileAssetUpdater <EAAccessoryDelegate, NSStreamDelegate> {
	unsigned _productIDCode;	// 24 = 0x18
	EAAccessory *_accessory;	// 28 = 0x1c
	NSString *_protocolString;	// 32 = 0x20
	EASession *_session;	// 36 = 0x24
	NSString *_bootloaderProtocol;	// 40 = 0x28
	NSString *_appProtocol;	// 44 = 0x2c
	unsigned _firmwareVersionMajor;	// 48 = 0x30
	unsigned _firmwareVersionMinor;	// 52 = 0x34
	unsigned _firmwareVersionRelease;	// 56 = 0x38
	NSString *_firmwareBundleFilename;	// 60 = 0x3c
	NSURL *_firmwareBundleURL;	// 64 = 0x40
	id _applyCompletion;	// 68 = 0x44
	id _progressHandler;	// 72 = 0x48
	NSMutableData *_outputData;	// 76 = 0x4c
	iAUPServer *_iAUPServer;	// 80 = 0x50
	NSObject<OS_dispatch_queue> *_eaNotificationDispatchQueue;	// 84 = 0x54
	BOOL _firmwareUpdateComplete;	// 88 = 0x58
	NSString *_updateBundleFilename;	// 92 = 0x5c
	NSURL *_updateBundleURL;	// 96 = 0x60
}
@property(retain, nonatomic) EAAccessory *accessory;	// G=0x31da49a9; S=0x31da2ea5; @synthesize=_accessory
@property(retain, nonatomic) NSString *appProtocol;	// G=0x31da4a19; S=0x31da4a29; @synthesize=_appProtocol
@property(copy, nonatomic) id applyCompletion;	// G=0x31da4a99; S=0x31da4aad; @synthesize=_applyCompletion
@property(retain, nonatomic) NSString *bootloaderProtocol;	// G=0x31da49f9; S=0x31da4a09; @synthesize=_bootloaderProtocol
@property(retain, nonatomic) NSString *firmwareBundleFilename;	// G=0x31da4a39; S=0x31da4a49; @synthesize=_updateBundleFilename
@property(retain, nonatomic) NSURL *firmwareBundleURL;	// G=0x31da4a59; S=0x31da4a69; @synthesize=_updateBundleURL
@property(assign, nonatomic) unsigned productIDCode;	// G=0x31da49e9; S=0x31da2e21; @synthesize=_productIDCode
@property(copy, nonatomic) id progressHandler;	// G=0x31da4abd; S=0x31da4ad1; @synthesize=_progressHandler
@property(retain, nonatomic) NSString *protocolString;	// G=0x31da49c9; S=0x31da49d9; @synthesize=_protocolString
@property(retain, nonatomic) iAUPServer *server;	// G=0x31da4a79; S=0x31da4a89; @synthesize=_iAUPServer
@property(retain, nonatomic) EASession *session;	// G=0x31da49b9; S=0x31da3101; @synthesize=_session
+ (id)appProtocolStringWithProductIDCode:(unsigned)productIDCode;	// 0x31da29d1
+ (id)bootloaderProtocolStringWithProductIDCode:(unsigned)productIDCode;	// 0x31da2985
+ (id)findAccessoryWithProductIDCode:(unsigned)productIDCode;	// 0x31da2a1d
- (id)initWithProductIDCode:(unsigned)productIDCode assetType:(id)type;	// 0x31da2c55
- (void)_accessoryDidConnect:(id)_accessory;	// 0x31da4601
- (void)_accessoryDidDisconnect:(id)_accessory;	// 0x31da4865
// declared property getter: - (id)accessory;	// 0x31da49a9
- (void)accessoryDidDisconnect:(id)accessory;	// 0x31da4505
// declared property getter: - (id)appProtocol;	// 0x31da4a19
// declared property getter: - (id)applyCompletion;	// 0x31da4a99
- (id)applyFirmware:(id)firmware progress:(id)progress;	// 0x31da39c1
- (id)assetWithMaxVersion:(id)maxVersion;	// 0x31da358d
// declared property getter: - (id)bootloaderProtocol;	// 0x31da49f9
- (void)dealloc;	// 0x31da2d85
- (BOOL)findAccessory;	// 0x31da2db1
// declared property getter: - (id)firmwareBundleFilename;	// 0x31da4a39
// declared property getter: - (id)firmwareBundleURL;	// 0x31da4a59
- (void)firmwareUpdateComplete:(id)complete;	// 0x31da4045
- (id)flushOutput;	// 0x31da42c5
- (void)handleInputData;	// 0x31da43fd
- (id)openSession;	// 0x31da3cf9
- (id)overrideQueryPredicateFromDict:(id)dict;	// 0x31da33b9
// declared property getter: - (unsigned)productIDCode;	// 0x31da49e9
// declared property getter: - (id)progressHandler;	// 0x31da4abd
// declared property getter: - (id)protocolString;	// 0x31da49c9
- (id)queryPredicate;	// 0x31da34b1
// declared property getter: - (id)server;	// 0x31da4a79
// declared property getter: - (id)session;	// 0x31da49b9
// declared property setter: - (void)setAccessory:(id)accessory;	// 0x31da2ea5
// declared property setter: - (void)setAppProtocol:(id)protocol;	// 0x31da4a29
// declared property setter: - (void)setApplyCompletion:(id)completion;	// 0x31da4aad
// declared property setter: - (void)setBootloaderProtocol:(id)protocol;	// 0x31da4a09
// declared property setter: - (void)setFirmwareBundleFilename:(id)filename;	// 0x31da4a49
// declared property setter: - (void)setFirmwareBundleURL:(id)url;	// 0x31da4a69
// declared property setter: - (void)setProductIDCode:(unsigned)code;	// 0x31da2e21
// declared property setter: - (void)setProgressHandler:(id)handler;	// 0x31da4ad1
// declared property setter: - (void)setProtocolString:(id)string;	// 0x31da49d9
// declared property setter: - (void)setServer:(id)server;	// 0x31da4a89
// declared property setter: - (void)setSession:(id)session;	// 0x31da3101
- (void)stream:(id)stream handleEvent:(unsigned)event;	// 0x31da4165
- (id)supportedProtocolForAccessory:(id)accessory;	// 0x31da3239
- (void)updateComplete:(id)complete;	// 0x31da4069
- (void)updateProgress:(double)progress;	// 0x31da4025
- (id)validateAsset;	// 0x31da3869
- (id)validateAssetAttributes:(id)attributes;	// 0x31da3709
- (id)writeData:(id)data;	// 0x31da3f11
@end
