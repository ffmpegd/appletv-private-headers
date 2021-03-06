/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixConfigProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface BuiltinConfig : XXUnknownSuperclass <NetflixConfigProtocol> {
	BOOL deviceSupported_;	// 4 = 0x4
	BOOL login_;	// 5 = 0x5
	BOOL testEnvironment_;	// 6 = 0x6
	BOOL supportDD5_1_;	// 7 = 0x7
	BOOL supportPlaylist302Redirects_;	// 8 = 0x8
	BOOL dfxpUrlsRequireRangeRequest_;	// 9 = 0x9
	NSString *country_;	// 12 = 0xc
	NSString *geolocation_;	// 16 = 0x10
	NSString *geolocation_status_;	// 20 = 0x14
	NSString *geolocation_language_;	// 24 = 0x18
	NSString *geolocation_country_;	// 28 = 0x1c
	NSString *geolocation_locale_;	// 32 = 0x20
	NSString *uiBootUrl_;	// 36 = 0x24
	NSString *genericFeedUrl_;	// 40 = 0x28
	NSString *netflixApiHost_;	// 44 = 0x2c
	NSString *testNccpDataUrl_;	// 48 = 0x30
	NSString *testNccpIdentityUrl_;	// 52 = 0x34
	NSString *testNccpLoggingUrl_;	// 56 = 0x38
	NSString *nccpServerUrl_;	// 60 = 0x3c
	unsigned cdnRankingMethod_;	// 64 = 0x40
	unsigned cdnMeasurementMethod_;	// 68 = 0x44
	NSString *_moviePeakBandwidthMultiplier;	// 72 = 0x48
	NSString *_selectedCdnBandwidthMultiplier;	// 76 = 0x4c
	NSString *_cdnOpenConnectForcedGroup;	// 80 = 0x50
	NSString *_roundForTargetDuration;	// 84 = 0x54
	NSString *_http500RetriesMethod;	// 88 = 0x58
	double timePeriodForReconfiguration_;	// 92 = 0x5c
}
@property(assign) unsigned cdnMeasurementMethod;	// G=0x59c459; S=0x59c46d; @synthesize=cdnMeasurementMethod_
@property(copy) NSString *cdnOpenConnectForcedGroup;	// G=0x59c52d; S=0x59c541; @synthesize=_cdnOpenConnectForcedGroup
@property(assign) unsigned cdnRankingMethod;	// G=0x59c42d; S=0x59c441; @synthesize=cdnRankingMethod_
@property(copy) NSString *country;	// G=0x59c191; S=0x59c1a5; @synthesize=country_
@property(assign) BOOL deviceSupported;	// G=0x59c131; S=0x59c149; @synthesize=deviceSupported_
@property(assign) BOOL dfxpUrlsRequireRangeRequest;	// G=0x59c4b5; S=0x59c4cd; @synthesize=dfxpUrlsRequireRangeRequest_
@property(retain) id env;	// G=0x59b619; S=0x59b659; converted property
@property(copy) NSString *genericFeedUrl;	// G=0x59c28d; S=0x59c2a1; @synthesize=genericFeedUrl_
@property(copy) NSString *geolocation;	// G=0x59c1b5; S=0x59c1c9; @synthesize=geolocation_
@property(copy) NSString *geolocation_country;	// G=0x59c221; S=0x59c235; @synthesize=geolocation_country_
@property(copy) NSString *geolocation_language;	// G=0x59c1fd; S=0x59c211; @synthesize=geolocation_language_
@property(copy) NSString *geolocation_locale;	// G=0x59c245; S=0x59c259; @synthesize=geolocation_locale_
@property(copy) NSString *geolocation_status;	// G=0x59c1d9; S=0x59c1ed; @synthesize=geolocation_status_
@property(copy) NSString *http500RetriesMethod;	// G=0x59c575; S=0x59c589; @synthesize=_http500RetriesMethod
@property(assign) BOOL login;	// G=0x59c161; S=0x59c179; @synthesize=login_
@property(retain) id loginWithString;	// G=0x59b6ad; S=0x59b6ed; converted property
@property(copy) NSString *moviePeakBandwidthMultiplier;	// G=0x59c4e5; S=0x59c4f9; @synthesize=_moviePeakBandwidthMultiplier
@property(copy) NSString *nccpServerUrl;	// G=0x59c371; S=0x59c385; @synthesize=nccpServerUrl_
@property(copy) NSString *netflixApiHost;	// G=0x59c2b1; S=0x59c2c5; @synthesize=netflixApiHost_
@property(copy) NSString *roundForTargetDuration;	// G=0x59c551; S=0x59c565; @synthesize=_roundForTargetDuration
@property(copy) NSString *selectedCdnBandwidthMultiplier;	// G=0x59c509; S=0x59c51d; @synthesize=_selectedCdnBandwidthMultiplier
@property(assign) BOOL supportDD5_1;	// G=0x59c3fd; S=0x59c415; @synthesize=supportDD5_1_
@property(assign) BOOL supportPlaylist302Redirects;	// G=0x59c485; S=0x59c49d; @synthesize=supportPlaylist302Redirects_
@property(assign) BOOL testEnvironment;	// G=0x59c2d5; S=0x59c2ed; @synthesize=testEnvironment_
@property(copy) NSString *testNccpDataUrl;	// G=0x59c305; S=0x59c319; @synthesize=testNccpDataUrl_
@property(copy) NSString *testNccpIdentityUrl;	// G=0x59c329; S=0x59c33d; @synthesize=testNccpIdentityUrl_
@property(copy) NSString *testNccpLoggingUrl;	// G=0x59c34d; S=0x59c361; @synthesize=testNccpLoggingUrl_
@property(assign) double timePeriodForReconfiguration;	// G=0x59c395; S=0x59c3c9; @synthesize=timePeriodForReconfiguration_
@property(copy) NSString *uiBootUrl;	// G=0x59c269; S=0x59c27d; @synthesize=uiBootUrl_
- (id)init;	// 0x59b399
// declared property getter: - (unsigned)cdnMeasurementMethod;	// 0x59c459
// declared property getter: - (id)cdnOpenConnectForcedGroup;	// 0x59c52d
// declared property getter: - (unsigned)cdnRankingMethod;	// 0x59c42d
// declared property getter: - (id)country;	// 0x59c191
- (void)dealloc;	// 0x59b499
// declared property getter: - (BOOL)deviceSupported;	// 0x59c131
// declared property getter: - (BOOL)dfxpUrlsRequireRangeRequest;	// 0x59c4b5
// converted property getter: - (id)env;	// 0x59b619
// declared property getter: - (id)genericFeedUrl;	// 0x59c28d
// declared property getter: - (id)geolocation;	// 0x59c1b5
// declared property getter: - (id)geolocation_country;	// 0x59c221
// declared property getter: - (id)geolocation_language;	// 0x59c1fd
// declared property getter: - (id)geolocation_locale;	// 0x59c245
// declared property getter: - (id)geolocation_status;	// 0x59c1d9
// declared property getter: - (id)http500RetriesMethod;	// 0x59c575
// declared property getter: - (BOOL)login;	// 0x59c161
// converted property getter: - (id)loginWithString;	// 0x59b6ad
// declared property getter: - (id)moviePeakBandwidthMultiplier;	// 0x59c4e5
// declared property getter: - (id)nccpServerUrl;	// 0x59c371
// declared property getter: - (id)netflixApiHost;	// 0x59c2b1
- (id)parsableItems;	// 0x59b701
// declared property getter: - (id)roundForTargetDuration;	// 0x59c551
// declared property getter: - (id)selectedCdnBandwidthMultiplier;	// 0x59c509
// declared property setter: - (void)setCdnMeasurementMethod:(unsigned)method;	// 0x59c46d
// declared property setter: - (void)setCdnOpenConnectForcedGroup:(id)group;	// 0x59c541
// declared property setter: - (void)setCdnRankingMethod:(unsigned)method;	// 0x59c441
// declared property setter: - (void)setCountry:(id)country;	// 0x59c1a5
// declared property setter: - (void)setDeviceSupported:(BOOL)supported;	// 0x59c149
// declared property setter: - (void)setDfxpUrlsRequireRangeRequest:(BOOL)request;	// 0x59c4cd
// converted property setter: - (void)setEnv:(id)env;	// 0x59b659
// declared property setter: - (void)setGenericFeedUrl:(id)url;	// 0x59c2a1
// declared property setter: - (void)setGeolocation:(id)geolocation;	// 0x59c1c9
// declared property setter: - (void)setGeolocation_country:(id)country;	// 0x59c235
// declared property setter: - (void)setGeolocation_language:(id)language;	// 0x59c211
// declared property setter: - (void)setGeolocation_locale:(id)locale;	// 0x59c259
// declared property setter: - (void)setGeolocation_status:(id)status;	// 0x59c1ed
// declared property setter: - (void)setHttp500RetriesMethod:(id)method;	// 0x59c589
// declared property setter: - (void)setLogin:(BOOL)login;	// 0x59c179
// converted property setter: - (void)setLoginWithString:(id)string;	// 0x59b6ed
// declared property setter: - (void)setMoviePeakBandwidthMultiplier:(id)multiplier;	// 0x59c4f9
// declared property setter: - (void)setNccpServerUrl:(id)url;	// 0x59c385
// declared property setter: - (void)setNetflixApiHost:(id)host;	// 0x59c2c5
// declared property setter: - (void)setRoundForTargetDuration:(id)targetDuration;	// 0x59c565
// declared property setter: - (void)setSelectedCdnBandwidthMultiplier:(id)multiplier;	// 0x59c51d
// declared property setter: - (void)setSupportDD5_1:(BOOL)a1;	// 0x59c415
// declared property setter: - (void)setSupportPlaylist302Redirects:(BOOL)redirects;	// 0x59c49d
// declared property setter: - (void)setTestEnvironment:(BOOL)environment;	// 0x59c2ed
// declared property setter: - (void)setTestNccpDataUrl:(id)url;	// 0x59c319
// declared property setter: - (void)setTestNccpIdentityUrl:(id)url;	// 0x59c33d
// declared property setter: - (void)setTestNccpLoggingUrl:(id)url;	// 0x59c361
// declared property setter: - (void)setTimePeriodForReconfiguration:(double)reconfiguration;	// 0x59c3c9
// declared property setter: - (void)setUiBootUrl:(id)url;	// 0x59c27d
// declared property getter: - (BOOL)supportDD5_1;	// 0x59c3fd
// declared property getter: - (BOOL)supportPlaylist302Redirects;	// 0x59c485
// declared property getter: - (BOOL)testEnvironment;	// 0x59c2d5
// declared property getter: - (id)testNccpDataUrl;	// 0x59c305
// declared property getter: - (id)testNccpIdentityUrl;	// 0x59c329
// declared property getter: - (id)testNccpLoggingUrl;	// 0x59c34d
// declared property getter: - (double)timePeriodForReconfiguration;	// 0x59c395
// declared property getter: - (id)uiBootUrl;	// 0x59c269
@end

