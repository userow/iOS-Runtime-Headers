/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerRangingReport : PBCodable <NSCopying> {
    unsigned int  _awdlLatency;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int awdlLatency : 1; 
        unsigned int numMeasurements : 1; 
        unsigned int peerMasterChannel : 1; 
        unsigned int peerPreferredChannel : 1; 
        unsigned int peerPreferredChannelFlags : 1; 
        unsigned int protocolVersion : 1; 
        unsigned int rangingBandwidth : 1; 
        unsigned int rangingChannel : 1; 
        unsigned int rangingChannelQuality : 1; 
        unsigned int rangingLatency : 1; 
        unsigned int resultFlags : 1; 
        unsigned int resultStatus : 1; 
        unsigned int selfMasterChannel : 1; 
        unsigned int selfPreferredChannel : 1; 
        unsigned int selfPreferredChannelFlags : 1; 
        unsigned int validCount : 1; 
    }  _has;
    unsigned int  _numMeasurements;
    unsigned int  _peerMasterChannel;
    unsigned int  _peerPreferredChannel;
    unsigned int  _peerPreferredChannelFlags;
    unsigned int  _protocolVersion;
    unsigned int  _rangingBandwidth;
    unsigned int  _rangingChannel;
    unsigned int  _rangingChannelQuality;
    unsigned int  _rangingLatency;
    unsigned int  _resultFlags;
    unsigned int  _resultStatus;
    NSMutableArray * _rttSamples;
    unsigned int  _selfMasterChannel;
    unsigned int  _selfPreferredChannel;
    unsigned int  _selfPreferredChannelFlags;
    unsigned long long  _timestamp;
    unsigned int  _validCount;
}

@property (nonatomic) unsigned int awdlLatency;
@property (nonatomic) BOOL hasAwdlLatency;
@property (nonatomic) BOOL hasNumMeasurements;
@property (nonatomic) BOOL hasPeerMasterChannel;
@property (nonatomic) BOOL hasPeerPreferredChannel;
@property (nonatomic) BOOL hasPeerPreferredChannelFlags;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) BOOL hasRangingBandwidth;
@property (nonatomic) BOOL hasRangingChannel;
@property (nonatomic) BOOL hasRangingChannelQuality;
@property (nonatomic) BOOL hasRangingLatency;
@property (nonatomic) BOOL hasResultFlags;
@property (nonatomic) BOOL hasResultStatus;
@property (nonatomic) BOOL hasSelfMasterChannel;
@property (nonatomic) BOOL hasSelfPreferredChannel;
@property (nonatomic) BOOL hasSelfPreferredChannelFlags;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasValidCount;
@property (nonatomic) unsigned int numMeasurements;
@property (nonatomic) unsigned int peerMasterChannel;
@property (nonatomic) unsigned int peerPreferredChannel;
@property (nonatomic) unsigned int peerPreferredChannelFlags;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) unsigned int rangingBandwidth;
@property (nonatomic) unsigned int rangingChannel;
@property (nonatomic) unsigned int rangingChannelQuality;
@property (nonatomic) unsigned int rangingLatency;
@property (nonatomic) unsigned int resultFlags;
@property (nonatomic) unsigned int resultStatus;
@property (nonatomic, retain) NSMutableArray *rttSamples;
@property (nonatomic) unsigned int selfMasterChannel;
@property (nonatomic) unsigned int selfPreferredChannel;
@property (nonatomic) unsigned int selfPreferredChannelFlags;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int validCount;

+ (Class)rttSamplesType;

- (void)addRttSamples:(id)arg1;
- (unsigned int)awdlLatency;
- (void)clearRttSamples;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAwdlLatency;
- (BOOL)hasNumMeasurements;
- (BOOL)hasPeerMasterChannel;
- (BOOL)hasPeerPreferredChannel;
- (BOOL)hasPeerPreferredChannelFlags;
- (BOOL)hasProtocolVersion;
- (BOOL)hasRangingBandwidth;
- (BOOL)hasRangingChannel;
- (BOOL)hasRangingChannelQuality;
- (BOOL)hasRangingLatency;
- (BOOL)hasResultFlags;
- (BOOL)hasResultStatus;
- (BOOL)hasSelfMasterChannel;
- (BOOL)hasSelfPreferredChannel;
- (BOOL)hasSelfPreferredChannelFlags;
- (BOOL)hasTimestamp;
- (BOOL)hasValidCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numMeasurements;
- (unsigned int)peerMasterChannel;
- (unsigned int)peerPreferredChannel;
- (unsigned int)peerPreferredChannelFlags;
- (unsigned int)protocolVersion;
- (unsigned int)rangingBandwidth;
- (unsigned int)rangingChannel;
- (unsigned int)rangingChannelQuality;
- (unsigned int)rangingLatency;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)resultFlags;
- (unsigned int)resultStatus;
- (id)rttSamples;
- (id)rttSamplesAtIndex:(unsigned int)arg1;
- (unsigned int)rttSamplesCount;
- (unsigned int)selfMasterChannel;
- (unsigned int)selfPreferredChannel;
- (unsigned int)selfPreferredChannelFlags;
- (void)setAwdlLatency:(unsigned int)arg1;
- (void)setHasAwdlLatency:(BOOL)arg1;
- (void)setHasNumMeasurements:(BOOL)arg1;
- (void)setHasPeerMasterChannel:(BOOL)arg1;
- (void)setHasPeerPreferredChannel:(BOOL)arg1;
- (void)setHasPeerPreferredChannelFlags:(BOOL)arg1;
- (void)setHasProtocolVersion:(BOOL)arg1;
- (void)setHasRangingBandwidth:(BOOL)arg1;
- (void)setHasRangingChannel:(BOOL)arg1;
- (void)setHasRangingChannelQuality:(BOOL)arg1;
- (void)setHasRangingLatency:(BOOL)arg1;
- (void)setHasResultFlags:(BOOL)arg1;
- (void)setHasResultStatus:(BOOL)arg1;
- (void)setHasSelfMasterChannel:(BOOL)arg1;
- (void)setHasSelfPreferredChannel:(BOOL)arg1;
- (void)setHasSelfPreferredChannelFlags:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasValidCount:(BOOL)arg1;
- (void)setNumMeasurements:(unsigned int)arg1;
- (void)setPeerMasterChannel:(unsigned int)arg1;
- (void)setPeerPreferredChannel:(unsigned int)arg1;
- (void)setPeerPreferredChannelFlags:(unsigned int)arg1;
- (void)setProtocolVersion:(unsigned int)arg1;
- (void)setRangingBandwidth:(unsigned int)arg1;
- (void)setRangingChannel:(unsigned int)arg1;
- (void)setRangingChannelQuality:(unsigned int)arg1;
- (void)setRangingLatency:(unsigned int)arg1;
- (void)setResultFlags:(unsigned int)arg1;
- (void)setResultStatus:(unsigned int)arg1;
- (void)setRttSamples:(id)arg1;
- (void)setSelfMasterChannel:(unsigned int)arg1;
- (void)setSelfPreferredChannel:(unsigned int)arg1;
- (void)setSelfPreferredChannelFlags:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setValidCount:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)validCount;
- (void)writeTo:(id)arg1;

@end