//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCReverbParams : NSObject
{
    float _reverbParam_DryWetMix;
    float _reverbParam_Gain;
    float _reverbParam_MinDelayTime;
    float _reverbParam_MaxDelayTime;
    float _reverbParam_DecayTimeAt0Hz;
    float _reverbParam_DecayTimeAtNyquist;
    float _reverbParam_RandomizeReflections;
    long long _reverbType;
}

@property(nonatomic) long long reverbType; // @synthesize reverbType=_reverbType;
@property(nonatomic) float reverbParam_RandomizeReflections; // @synthesize reverbParam_RandomizeReflections=_reverbParam_RandomizeReflections;
@property(nonatomic) float reverbParam_DecayTimeAtNyquist; // @synthesize reverbParam_DecayTimeAtNyquist=_reverbParam_DecayTimeAtNyquist;
@property(nonatomic) float reverbParam_DecayTimeAt0Hz; // @synthesize reverbParam_DecayTimeAt0Hz=_reverbParam_DecayTimeAt0Hz;
@property(nonatomic) float reverbParam_MaxDelayTime; // @synthesize reverbParam_MaxDelayTime=_reverbParam_MaxDelayTime;
@property(nonatomic) float reverbParam_MinDelayTime; // @synthesize reverbParam_MinDelayTime=_reverbParam_MinDelayTime;
@property(nonatomic) float reverbParam_Gain; // @synthesize reverbParam_Gain=_reverbParam_Gain;
@property(nonatomic) float reverbParam_DryWetMix; // @synthesize reverbParam_DryWetMix=_reverbParam_DryWetMix;
- (id)init;

@end

