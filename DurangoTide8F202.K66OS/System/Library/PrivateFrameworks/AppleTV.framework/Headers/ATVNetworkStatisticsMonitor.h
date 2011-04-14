/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSTimer;

@interface ATVNetworkStatisticsMonitor : NSObject {
@private
	NSDictionary *_tcpStatistics;	// 4 = 0x4
	NSDictionary *_ipStatistics;	// 8 = 0x8
	NSDictionary *_interfaceStatistics;	// 12 = 0xc
	NSTimer *_monitorTimer;	// 16 = 0x10
	int _packetsReceived;	// 20 = 0x14
	int _inputErrors;	// 24 = 0x18
	int _packetsSent;	// 28 = 0x1c
	int _outputErrors;	// 32 = 0x20
	int _bytesReceived;	// 36 = 0x24
	int _bytesSent;	// 40 = 0x28
	int _packetsDropped;	// 44 = 0x2c
	BOOL _shouldIncludeIPStats;	// 48 = 0x30
	BOOL _shouldIncludeInterfaceStats;	// 49 = 0x31
}
@property(readonly, assign) int bytesReceived;	// G=0x33726f69; @synthesize=_bytesReceived
@property(readonly, assign) int bytesSent;	// G=0x33726f59; @synthesize=_bytesSent
@property(readonly, assign) int inputErrors;	// G=0x33726f99; @synthesize=_inputErrors
@property(readonly, retain) NSDictionary *interfaceStatistics;	// G=0x33726f39; converted property
@property(readonly, retain) NSDictionary *ipStatistics;	// G=0x33726f29; converted property
@property(readonly, assign) int outputErrors;	// G=0x33726f79; @synthesize=_outputErrors
@property(readonly, assign) int packetsDropped;	// G=0x33726f49; @synthesize=_packetsDropped
@property(readonly, assign) int packetsReceived;	// G=0x33726fa9; @synthesize=_packetsReceived
@property(readonly, assign) int packetsSent;	// G=0x33726f89; @synthesize=_packetsSent
@property(assign) BOOL shouldIncludeIPStats;	// G=0x33726fd9; S=0x33726fe9; @synthesize=_shouldIncludeIPStats
@property(assign) BOOL shouldIncludeInterfaceStats;	// G=0x33726fb9; S=0x33726fc9; @synthesize=_shouldIncludeInterfaceStats
@property(readonly, retain) NSDictionary *tcpStatistics;	// G=0x33726f19; converted property
- (id)init;	// 0x33727201
- (void)_gatherIPStatistics;	// 0x33727341
- (void)_gatherInterfaceStatistics;	// 0x33727891
- (void)_gatherNetStatistics;	// 0x33726ff9
- (void)_gatherTCPStatistics;	// 0x33727479
// declared property getter: - (int)bytesReceived;	// 0x33726f69
// declared property getter: - (int)bytesSent;	// 0x33726f59
- (void)dealloc;	// 0x337272d5
- (void)gatherStats;	// 0x3372714d
// declared property getter: - (int)inputErrors;	// 0x33726f99
// converted property getter: - (id)interfaceStatistics;	// 0x33726f39
// converted property getter: - (id)ipStatistics;	// 0x33726f29
// declared property getter: - (int)outputErrors;	// 0x33726f79
// declared property getter: - (int)packetsDropped;	// 0x33726f49
// declared property getter: - (int)packetsReceived;	// 0x33726fa9
// declared property getter: - (int)packetsSent;	// 0x33726f89
- (void)resetStats;	// 0x3372704d
// declared property setter: - (void)setShouldIncludeIPStats:(BOOL)includeIPStats;	// 0x33726fe9
// declared property setter: - (void)setShouldIncludeInterfaceStats:(BOOL)includeInterfaceStats;	// 0x33726fc9
// declared property getter: - (BOOL)shouldIncludeIPStats;	// 0x33726fd9
// declared property getter: - (BOOL)shouldIncludeInterfaceStats;	// 0x33726fb9
- (void)startMonitoring;	// 0x3372718d
- (void)stopMonitoring;	// 0x33727161
// converted property getter: - (id)tcpStatistics;	// 0x33726f19
@end
