/* This file was generated by mib2c and is intended for use as a mib module
  for the ucd-snmp snmpd agent. */

#ifndef _MIBGROUP_DLMIB_SIMPLE_H
#define _MIBGROUP_DLMIB_SIMPLE_H

/* we may use header_generic and header_simple_table from the util_funcs module */

config_require(util_funcs)

/* function prototypes */
	void init_dlMIB_simple(void);
	FindVarMethod var_dlMIB_simple;
	FindVarMethod var_communicationsEntityTable;
	FindVarMethod var_sap1Table;
	FindVarMethod var_sap2Table;
	FindVarMethod var_clProtocolMachineTable;
	FindVarMethod var_coProtocolMachineTable;
	FindVarMethod var_singlePeerConnectionTable;
	FindVarMethod var_physicalEntityTable;
	FindVarMethod var_physicalSAPTable;
	FindVarMethod var_dataCircuitTable;
	FindVarMethod var_physicalConnectionTable;
	FindVarMethod var_datalinkEntityTable;
	FindVarMethod var_dLSAPTable;
	FindVarMethod var_lAPBDLETable;
	FindVarMethod var_sLPPMTable;
	FindVarMethod var_sLPConnectionTable;
	FindVarMethod var_sLPConnectionIVMOTable;
	FindVarMethod var_mACDLETable;
	FindVarMethod var_mACTable;
	FindVarMethod var_lLCDLETable;
	FindVarMethod var_lLCCLPMTable;
	FindVarMethod var_lLCCOPMTable;
	FindVarMethod var_resourceTypeIdTable;
	FindVarMethod var_lLCStationTable;
	FindVarMethod var_lLCSAPTable;
	FindVarMethod var_rDESetupTable;
	FindVarMethod var_rDEPairTable;
	FindVarMethod var_lLCConnectionLessTable;
	FindVarMethod var_lLCConnection2Table;
	FindVarMethod var_lLCConnection2IVMOTable;
	FindVarMethod var_lLCConnectionlessAckTable;
	FindVarMethod var_lLCConnectionlessAckIVMOTable;
	FindVarMethod var_networkEntityTable;
	FindVarMethod var_nSAPTable;
	FindVarMethod var_cLNSTable;
	FindVarMethod var_cLNSISISTable;
	FindVarMethod var_cLNSISISLevel2Table;
	FindVarMethod var_linkageTable;
	FindVarMethod var_cONSTable;
	FindVarMethod var_networkConnectionTable;
	FindVarMethod var_x25PLETable;
	FindVarMethod var_x25PLE_DTETable;
	FindVarMethod var_x25PLE_DCETable;
	FindVarMethod var_x25PLEIVMOTable;
	FindVarMethod var_x25PLEIVMO_DTETable;
	FindVarMethod var_x25PLEIVMO_DCETable;
	FindVarMethod var_virtualCallTable;
	FindVarMethod var_virtualCircuitTable;
	FindVarMethod var_virtualCircuit_DTETable;
	FindVarMethod var_virtualCircuit_DCETable;
	FindVarMethod var_permanentVirtualCircuitTable;
	FindVarMethod var_permanentVirtualCircuit_DTETable;
	FindVarMethod var_permanentVirtualCircuit_DCETable;
	FindVarMethod var_virtualCallIVMOTable;
	FindVarMethod var_switchedVirtualCallTable;
	FindVarMethod var_virtualCall_DTETable;
	FindVarMethod var_virtualCall_DCETable;
	FindVarMethod var_dSeriesCountsTable;
	FindVarMethod var_adjacencyTable;
	FindVarMethod var_virtualAdjacencyTable;
	FindVarMethod var_destinationTable;
	FindVarMethod var_destinationSystemTable;
	FindVarMethod var_destinationAreaTable;
	FindVarMethod var_reachableAddressTable;

	WriteMethod write_physicalEntityPhysicalEntityTitles;
	WriteMethod write_dataCircuitBitErrorsThreshold;
	WriteMethod write_dataCircuitType;
	WriteMethod write_dataCircuitPhysicalMediaNames;
	WriteMethod write_dataCircuitPhysicalInterfaceType;
	WriteMethod write_dataCircuitPhysicalInterfaceStandard;
	WriteMethod write_dataCircuitSynchronizationMode;
	WriteMethod write_dataCircuitTransmissionCoding;
	WriteMethod write_dataCircuitTransmissionMode;
	WriteMethod write_dataCircuitTransmissionRate;
	WriteMethod write_dataCircuitRowStatus;
	WriteMethod write_physicalConnectionEndpointIdentifier;
	WriteMethod write_physicalConnectionPortNumber;
	WriteMethod write_physicalConnectionRowStatus;
	WriteMethod write_datalinkEntityProviderEntityNames;
	WriteMethod write_datalinkEntityRowStatus;
	WriteMethod write_dLSAPRowStatus;
	WriteMethod write_lAPBDLEmT1Timer;
	WriteMethod write_lAPBDLEmT3Timer;
	WriteMethod write_lAPBDLEmW;
	WriteMethod write_lAPBDLEmXSend;
	WriteMethod write_lAPBDLEmXReceive;
	WriteMethod write_lAPBDLEmT2Timer;
	WriteMethod write_lAPBDLERowStatus;
	WriteMethod write_sLPPMadministrativeState;
	WriteMethod write_sLPPMRowStatus;
	WriteMethod write_sLPConnectionInterfaceType;
	WriteMethod write_sLPConnectionK;
	WriteMethod write_sLPConnectionN1;
	WriteMethod write_sLPConnectionN2;
	WriteMethod write_sLPConnectionSequenceModulus;
	WriteMethod write_sLPConnectionT1Timer;
	WriteMethod write_sLPConnectionT2Timer;
	WriteMethod write_sLPConnectionT3Timer;
	WriteMethod write_sLPConnectionT4Timer;
	WriteMethod write_sLPConnectionAdministrativeState;
	WriteMethod write_sLPConnectionRowStatus;
	WriteMethod write_sLPConnectionIVMOinterfaceType;
	WriteMethod write_sLPConnectionIVMOk;
	WriteMethod write_sLPConnectionIVMOn1;
	WriteMethod write_sLPConnectionIVMOn2;
	WriteMethod write_sLPConnectionIVMOsequenceModulus;
	WriteMethod write_sLPConnectionIVMOt1Timer;
	WriteMethod write_sLPConnectionIVMOt2Timer;
	WriteMethod write_sLPConnectionIVMOt3Timer;
	WriteMethod write_sLPConnectionIVMOt4Timer;
	WriteMethod write_sLPConnectionIVMORowStatus;
	WriteMethod write_mACDLERowStatus;
	WriteMethod write_mACRowStatus;
	WriteMethod write_lLCDLERowStatus;
	WriteMethod write_lLCCLPMRowStatus;
	WriteMethod write_lLCCOPMRowStatus;
	WriteMethod write_lLCStationLLCName;
	WriteMethod write_lLCStationSupportedServicesTypes;
	WriteMethod write_lLCStationType1AcknowledgeTimeoutValue;
	WriteMethod write_lLCStationType1MaximumRetryCount;
	WriteMethod write_lLCStationMaximumPDUN3;
	WriteMethod write_lLCStationMaximumRetransmissions4;
	WriteMethod write_lLCStationReceiveVariableLifetime;
	WriteMethod write_lLCStationTransmitVariableLifetime;
	WriteMethod write_lLCStationType3AcknowledgeTimeoutValue;
	WriteMethod write_lLCStationBufferSize;
	WriteMethod write_lLCStationSTRIndicator;
	WriteMethod write_lLCStationVersionNumber;
	WriteMethod write_rDESetupAgingEnabled;
	WriteMethod write_rDESetupAgingValue;
	WriteMethod write_rDESetupEnableType2Reset;
	WriteMethod write_rDESetupMaximumRouteDescriptors;
	WriteMethod write_rDESetupMaximumResponseTime;
	WriteMethod write_rDESetupMinimumPDUSize;
	WriteMethod write_rDESetupRDEHold;
	WriteMethod write_rDESetupRDEReplace;
	WriteMethod write_rDESetupResetOnTestEnabled;
	WriteMethod write_lLCConnectionlessName;
	WriteMethod write_lLCConnectionlessMaximumLLCInformationFieldSize;
	WriteMethod write_lLCConnection2Name;
	WriteMethod write_lLCConnection2MaximumRetransmissions;
	WriteMethod write_lLCConnection2ReceivedWindowSize;
	WriteMethod write_lLCConnection2SendWindowSize;
	WriteMethod write_lLCConnection2AcknowledgeTimeoutValue;
	WriteMethod write_lLCConnection2BusyStateTimeoutValue;
	WriteMethod write_lLCConnection2PBitTimeoutValue;
	WriteMethod write_lLCConnection2RejectTimeoutValue;
	WriteMethod write_lLCConnection2Route;
	WriteMethod write_lLCConnection2KStep;
	WriteMethod write_lLCConnection2MaxSendWindowSize;
	WriteMethod write_lLCConnection2OptionalTolerationIPDUs;
	WriteMethod write_lLCConnection2AdministrativeState;
	WriteMethod write_lLCConnection2AlarmStatus;
	WriteMethod write_lLCConnection2IVMOMaximumRetransmissions;
	WriteMethod write_lLCConnection2IVMOReceivedWindowSize;
	WriteMethod write_lLCConnection2IVMOSendWindowSize;
	WriteMethod write_lLCConnection2IVMOAcknowledgeTimeoutValue;
	WriteMethod write_lLCConnection2IVMOBusyStateTimeoutValue;
	WriteMethod write_lLCConnection2IVMOBitTimeoutValue;
	WriteMethod write_lLCConnection2IVMORejectTimeoutValue;
	WriteMethod write_lLCConnection2IVMORoute;
	WriteMethod write_lLCConnection2IVMOKStep;
	WriteMethod write_lLCConnection2IVMOMaxSendWindowSize;
	WriteMethod write_lLCConnection2IVMOOptionalTolerationIPDUs;
	WriteMethod write_lLCConnectionlessAckMaximumLLCInformationFieldSize;
	WriteMethod write_lLCConnectionlessAckMaximumRetransmissions;
	WriteMethod write_lLCConnectionlessAckReceiveResources;
	WriteMethod write_lLCConnectionlessAckIVMOMaximumLLCInformationFieldSize;
	WriteMethod write_lLCConnectionlessAckIVMOMaximumRetransmissions;
	WriteMethod write_lLCConnectionlessAckIVMORowStatus;
	WriteMethod write_networkEntityTitles;
	WriteMethod write_networkEntitySystemTypes;
	WriteMethod write_networkEntityRowStatus;
	WriteMethod write_nSAPRowStatus;
	WriteMethod write_cLNSAdministrativeState;
	WriteMethod write_cLNSSupportedProtocols;
	WriteMethod write_cLNSOperationalSystemType;
	WriteMethod write_cLNSMaximumLifetime;
	WriteMethod write_cLNSEnableChecksum;
	WriteMethod write_cLNSRowStatus;
	WriteMethod write_cONSAdministrativeState;
	WriteMethod write_cONSOperationalSystemType;
	WriteMethod write_cONSRowStatus;
	WriteMethod write_x25PLEIVMO_DCERowStatus;
	WriteMethod write_permanentVirtualCircuitRowStatus;
	WriteMethod write_switchedVirtualCallRowStatus;
	WriteMethod write_virtualCall_DTERowStatus;
	WriteMethod write_dSeriesRowStatus;
	WriteMethod write_neighbourSNPAAddress;
	WriteMethod write_neighbourSystemIds;
	WriteMethod write_adjacencyRowStatus;
	WriteMethod write_destinationDefaultMetricPathCost;
	WriteMethod write_destinationDefaultMetricOutputAdjacencies;
	WriteMethod write_destinationDelayMetricPathCost;
	WriteMethod write_destinationDelayMetricOutputAdjacencies;
	WriteMethod write_destinationExpenseMetricPathCost;
	WriteMethod write_destinationExpenseMetricOutputAdjacencies;
	WriteMethod write_destinationErrorMetricPathCost;
	WriteMethod write_destinationErrorMetricOutputAdjacencies;
	WriteMethod write_reachableAddressPrefix;
	WriteMethod write_reachableAddressMappingType;
	WriteMethod write_reachableAddressDefaultMetric;
	WriteMethod write_reachableAddressDelayMetric;
	WriteMethod write_reachableAddressExpenseMetric;
	WriteMethod write_reachableAddressErrorMetric;
	WriteMethod write_reachableAddressDefaultMetricType;
	WriteMethod write_reachableAddressDelayMetricType;
	WriteMethod write_reachableAddressExpenseMetricType;
	WriteMethod write_reachableAddressErrorMetricType;
	WriteMethod write_reachableAddressAdministrativeState;
	WriteMethod write_reachableAddressSNPAAddresses;
	WriteMethod write_reachableAddressSNPAMask;
	WriteMethod write_reachableAddressSNPAPrefix;
	WriteMethod write_reachableAddressRowStatus;
	WriteMethod write_sLPConnectionDefaultInterfaceType;
	WriteMethod write_sLPConnectionDefaultK;
	WriteMethod write_sLPConnectionDefaultN1;
	WriteMethod write_sLPConnectionDefaultN2;
	WriteMethod write_sLPConnectionDefaultSequenceModulus;
	WriteMethod write_sLPConnectionDefaultT1Timer;
	WriteMethod write_sLPConnectionDefaultT2Timer;
	WriteMethod write_sLPConnectionDefaultT3Timer;
	WriteMethod write_sLPConnectionDefaultT4Timer;
	WriteMethod write_lLCConnection2DefaultMaximumRetransmissions;
	WriteMethod write_lLCConnection2DefaultReceivedWindowSize;
	WriteMethod write_lLCConnection2DefaultSendWindowSize;
	WriteMethod write_lLCConnection2DefaultAcknowledgeTimeoutValue;
	WriteMethod write_lLCConnection2DefaultBusyStateTimeoutValue;
	WriteMethod write_lLCConnection2DefaultPBitTimeoutValue;
	WriteMethod write_lLCConnection2DefaultRejectTimeoutValue;
	WriteMethod write_lLCConnection2DefaultRoute;
	WriteMethod write_lLCConnection2DefaultKStep;
	WriteMethod write_lLCConnection2DefaultMaxSendWindowSize;
	WriteMethod write_lLCConnection2DefaultOptionalTolerationIPDUs;
	WriteMethod write_lLCConnectionlessAckDefaultMaximumLLCInformationFieldSize;
	WriteMethod write_lLCConnectionlessAckDefaultMaximumRetransmissions;

#endif				/* _MIBGROUP_DLMIB_SIMPLE_H */