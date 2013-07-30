/*
 * Copyright 2010-2012 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


#import "ElasticLoadBalancingResponse.h"
#import "../AmazonServiceExceptionUnmarshaller.h"

#import "ElasticLoadBalancingLoadBalancerNotFoundException.h"
#import "ElasticLoadBalancingInvalidConfigurationRequestException.h"


/**
 * Disable Availability Zones For Load Balancer Result
 *
 * \ingroup ElasticLoadBalancing
 */

@interface ElasticLoadBalancingDisableAvailabilityZonesForLoadBalancerResponse:ElasticLoadBalancingResponse

{
    NSMutableArray *availabilityZones;
}



-(void)setException:(AmazonServiceException *)theException;


/**
 * Default constructor for a new  object.  Callers should use the
 * property methods to initialize this object after creating it.
 */
-(id)init;

/**
 * A list of updated Availability Zones for the LoadBalancer.
 */
@property (nonatomic, retain) NSMutableArray *availabilityZones;



/**
 * Returns a value from the availabilityZones array for the specified index
 */
-(NSString *)availabilityZonesObjectAtIndex:(int)index;

/**
 * Returns a string representation of this object; useful for testing and
 * debugging.
 *
 * @return A string representation of this object.
 */
-(NSString *)description;


@end