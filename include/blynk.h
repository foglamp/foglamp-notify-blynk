#ifndef _BLYNK_H
#define _BLYNK_H

#include <string>
#include <mutex>

/**
 * Blynk notification class that sends a message
 * via Blynk BOT API
 */
class Blynk
{       
	public: 
		Blynk(ConfigCategory *config);
		~Blynk();

		bool	notify(const std::string& notificationName,
				const std::string& triggerReason,
				const std::string& message);
		void	reconfigure(const std::string& newConfig);

	private:
		bool		m_enable;
		std::string	m_token;
		std::string	m_url;
		std::string	m_pin;
		// Configuration mutex
		std::mutex	m_configMutex;
};
#endif
